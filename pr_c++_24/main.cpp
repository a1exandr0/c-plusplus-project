#include <iostream>
#include <string>


using namespace std;


class date_pure
{
public:
    int dd = 1, mm = 1, yy = 1;
    int p_days = 0, p_months = 0, p_years = 0;//// time passed after 01.01.0001 in days, months and years

    void input(int day, int month, int year) {
        if(check_validity(day, month, year)){
            dd = day;
            mm = month;
            yy = year;
            count_passed();
        } else {
            cout << "try again for valid data \n";
        }
    }


    void check_week_day() {
        cout << days[p_days%7] << endl;
    }


    void count_date_by_passed(int days) {// days to date
        int years_counter = 1;
        int days_counter = 1;
        int month_counter = 1;
        while(days != 0) {
            days -= 1;
            days_counter++;
            if (check_mod(years_counter)) {
                if(days_counter == allowed_days_mod[month_counter-1]+1){
                    month_counter++;
                    days_counter = 1;
                }
            } else {
                if(days_counter == allowed_days[month_counter-1]+1) {
                    month_counter++;
                    days_counter = 1;
                }
            }
            if(month_counter == 13) {
                years_counter++;
                month_counter = 1;
            }
        }
        cout << days_counter << "   " << month_counter << "   " << years_counter << endl;
        dd = days_counter;
        mm = month_counter;
        yy = years_counter;
    }

    void out() {
        cout << dd << "   " << mm << "   " << yy << endl;
    }



private:

    bool check_mod(int year){
        if((((year % 4) == 0) && ((year%100) != 0)) || year%400 == 0) {
            return true;
        } else{
            return false;
        }
    }


    int allowed_days[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int allowed_days_mod[12] = {31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string days[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };

    bool check_validity(int dd, int mm, int yy) {
        if (yy<1) {
            return false;
        }
        if (1>mm || mm>12) {
            return false;
        }
        if(check_mod(yy)) {
            if(dd>allowed_days_mod[mm-1]) {
                return false;
            }
        } else{
            if(dd>allowed_days[mm-1]) {
                return false;
            }
        }
        return true;
    }

    void count_passed() {
        int counter_days = 0;
        int counter_months = 0;
        int counter_years = yy - 1;
        for (int i = 1; i < yy; i++) {
            if (check_mod(i)) {
                for(int j = 1; j<13; j++) {
                    counter_days += allowed_days_mod[j-1];
                    counter_months++;
                }
            } else{
                for(int j = 1; j<13; j++) {
                    counter_days += allowed_days[j-1];
                    counter_months++;
                }
            }
        }
        if(check_mod(yy)){
            for (int f = 1; f<mm; f++) {
                counter_days += allowed_days_mod[f-1];
                counter_months++;
            }
        } else {
            for (int f = 1; f<mm; f++) {
                counter_days += allowed_days[f-1];
                counter_months++;
            }
        }
        counter_days += dd - 1;//// be careful, probably should have written "dd"
        p_days = counter_days;
        p_months = counter_months;
        p_years = counter_years;
    }


};


class time_pure{
public:
    int dd = 0;
    int hh = 0;
    int mm = 0;
    int ss = 0;
    int seconds_overall = 0;


    void input(int d, int h, int m, int s) {
        if(check_valid(d, h, m, s)) {
            dd = d;
            hh = h;
            mm = m;
            hh = h;
        } else {
            cout << "try again for valid data \n";
        }
        count_seconds();
    }


    void time_from_seconds(int n) {
        int sec_count = 0;
        int min_count = 0;
        int hours_count = 0;
        int days_count = 0;
        while(n != 0) {
            n -= 1;
            sec_count++;
            if(sec_count == 60) {
                sec_count = 0;
                min_count++;
            }
            if(min_count == 60) {
                min_count = 0;
                hours_count++;
            }
            if(hours_count == 24) {
                hours_count = 0;
                days_count++;
            }
        }
        dd = days_count;
        hh = hours_count;
        mm = min_count;
        ss = sec_count;
        cout << dd << "   " << hh << "   " << mm << "   " << ss << endl;
    }



    void count_seconds() {
        int counter = 0;
        counter += 86400*dd;
        counter += 3600*hh;
        counter += 60*mm;
        counter += ss;
        seconds_overall = counter;
    }


    void output() {
        cout << dd << "   " << hh << "   " << mm << "   " << ss << endl;
    }


    void count_days() {
        cout << dd << endl;
    }

    date_pure convertion() {
        date_pure* d = new date_pure;
        d->count_date_by_passed(dd);
        return *d;
    }


    void divide_by(int n) {
        time_from_seconds(seconds_overall / n);
    }


    void multiply_by(int n) {
        time_from_seconds(seconds_overall * n);
    }


private:
    bool check_valid(int d, int h, int m, int s) {
        if (s > 59 || s < 0) {
            return false;
        }
        if (m > 59 || m < 0) {
            return false;
        }
        if (h > 24 || h < 0) {
            return false;
        }
        return true;
    }
};


void compare_date(date_pure d1, date_pure d2){
    if (d1.p_days ==  d2.p_days){
        cout << "equal \n";
    }
    if (d1.p_days > d2.p_days) {
        cout << "1 is greater \n";
    } else if(d1.p_days < d2.p_days){
        cout << "2 is greater \n";
    }
};


void compare_time(time_pure t1, time_pure t2) {
    if(t1.seconds_overall > t2.seconds_overall) {
        cout << "t1 > t2 \n";
    } else if(t1.seconds_overall < t2.seconds_overall){
        cout << "t1 < t2 \n";
    } else {
        cout << "t1 == t2 \n";
    }
}


void next(date_pure d) {
    d.count_date_by_passed(d.p_days + 1);
}


void previous(date_pure d) {
    if (d.p_days != 0) {
        d.count_date_by_passed(d.p_days - 1);
    } else{
    cout << d.dd<< "   " << d.mm << "   " << d.yy <<endl;
    }
}


void add_day(date_pure d, int n) {
    d.count_date_by_passed(d.p_days + n);
}


void minus_day(date_pure d, int n) {
    if (d.p_days >= n) {
        d.count_date_by_passed(d.p_days - n);
    } else {
        cout << d.dd << "   " << d.mm << "   " << d.yy << endl;
    }
}


void days(date_pure d1, date_pure d2) {
    cout << abs(d1.p_days - d2.p_days) << endl;
}

time_pure minus_time(time_pure t1, time_pure t2) {
    time_pure res;
    int n;
    n = t1.seconds_overall - t2.seconds_overall;
    res.time_from_seconds(n);
    return res;
}


time_pure add_time(time_pure t1, time_pure t2) {
    time_pure res;
    int n;
    n = t1.seconds_overall + t2.seconds_overall;
    res.time_from_seconds(n);
    return res;
}

date_pure date_minus_time(date_pure d, time_pure t) {
    date_pure res;
    if (t.dd <= d.p_days){
        res.count_date_by_passed(d.p_days - t.dd);
    } else {
        cout << "wrong data\n";
    }
    return res;
}


date_pure date_plus_time(date_pure d, time_pure t) {
    date_pure res;
    res.count_date_by_passed(d.p_days + t.dd);
    return res;
}


date_pure date_minus_date(date_pure d1, date_pure d2) {
    if (d1.p_days > d2.p_days){
        d1.count_date_by_passed(d1.p_days - d2.p_days);
    } else {
        cout << "wrong data\n";
    }
    return d1;
}

date_pure date_plus_date(date_pure d1, date_pure d2) {
    d1.count_date_by_passed(d1.p_days + d2.p_days);
    return d1;
}



int main() {
    return 0;
}