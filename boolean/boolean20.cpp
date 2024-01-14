bool solve(int number){ return number / 100 == number % 10 ||
    (number / 10) % 10 == number % 10 ||
    number / 10 == (number / 10) % 10;
}

