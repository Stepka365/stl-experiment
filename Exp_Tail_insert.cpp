#include "Namespaces.h"

void experiments::vector_char_tail_insert(std::vector<char> &cont, time_log::TimeLogger &logger) {
    std::vector<char> test_vector;
    const int len = cont.size();
    logger.reset_start();
    for (int i = 0; i < len; ++i) {
        test_vector.push_back(cont[i]);
    }
    logger.log_duration(len, "char", "vector;tail_insert");
}

void experiments::vector_int_tail_insert(std::vector<int> &cont, time_log::TimeLogger &logger) {
    std::vector<int> test_vector;
    const int len = cont.size();
    logger.reset_start();
    for (int i = 0; i < len; ++i) {
        test_vector.push_back(cont[i]);
    }
    logger.log_duration(len, "int", "vector;tail_insert");
}

void experiments::vector_double_tail_insert(std::vector<double> &cont, time_log::TimeLogger &logger) {
    std::vector<double> test_vector;
    const int len = cont.size();
    logger.reset_start();
    for (int i = 0; i < len; ++i) {
        test_vector.push_back(cont[i]);
    }
    logger.log_duration(len, "double", "vector;tail_insert");
}

void experiments::vector_str_tail_insert(std::vector<std::string> &cont, time_log::TimeLogger &logger) {
    std::vector<std::string> test_vector;
    const int len = cont.size();
    logger.reset_start();
    for (int i = 0; i < len; ++i) {
        test_vector.push_back(cont[i]);
    }
    logger.log_duration(len, "string", "vector;tail_insert");
}

void experiments::list_char_tail_insert(std::list<char> &cont, time_log::TimeLogger &logger) {
    std::list<char> test_list;
    const int len = cont.size();
    std::list<char>::iterator it_cont = cont.begin();
    std::list<char>::iterator end_cont = cont.end();
    logger.reset_start();
    for (; it_cont != end_cont; ++it_cont) {
        test_list.push_back(*it_cont);
    }
    logger.log_duration(len, "char", "list;tail_insert");
}

void experiments::list_int_tail_insert(std::list<int> &cont, time_log::TimeLogger &logger) {
    std::list<int> test_list;
    const int len = cont.size();
    std::list<int>::iterator it_cont = cont.begin();
    std::list<int>::iterator end_cont = cont.end();
    logger.reset_start();
    for (; it_cont != end_cont; ++it_cont) {
        test_list.push_back(*it_cont);
    }
    logger.log_duration(len, "int", "list;tail_insert");
}

void experiments::list_double_tail_insert(std::list<double> &cont, time_log::TimeLogger &logger) {
    std::list<double> test_list;
    const int len = cont.size();
    std::list<double>::iterator it_cont = cont.begin();
    std::list<double>::iterator end_cont = cont.end();
    logger.reset_start();
    for (; it_cont != end_cont; ++it_cont) {
        test_list.push_back(*it_cont);
    }
    logger.log_duration(len, "double", "list;tail_insert");
}

void experiments::list_str_tail_insert(std::list<std::string> &cont, time_log::TimeLogger &logger) {
    std::list<std::string> test_list;
    const int len = cont.size();
    std::list<std::string>::iterator it_cont = cont.begin();
    std::list<std::string>::iterator end_cont = cont.end();
    logger.reset_start();
    for (; it_cont != end_cont; ++it_cont) {
        test_list.push_back(*it_cont);
    }
    logger.log_duration(len, "string", "list;tail_insert");
}

void experiments::deque_char_tail_insert(std::deque<char> &cont, time_log::TimeLogger &logger) {
    std::deque<char> test_deque;
    const int len = cont.size();
    std::deque<char>::iterator it_cont = cont.begin();
    std::deque<char>::iterator end_cont = cont.end();
    logger.reset_start();
    for (; it_cont != end_cont; ++it_cont) {
        test_deque.push_back(*it_cont);
    }
    logger.log_duration(len, "char", "deque;tail_insert");
}

void experiments::deque_int_tail_insert(std::deque<int> &cont, time_log::TimeLogger &logger) {
    std::deque<int> test_deque;
    const int len = cont.size();
    std::deque<int>::iterator it_cont = cont.begin();
    std::deque<int>::iterator end_cont = cont.end();
    logger.reset_start();
    for (; it_cont != end_cont; ++it_cont) {
        test_deque.push_back(*it_cont);
    }
    logger.log_duration(len, "int", "deque;tail_insert");
}

void experiments::deque_double_tail_insert(std::deque<double> &cont, time_log::TimeLogger &logger) {
    std::deque<double> test_deque;
    const int len = cont.size();
    std::deque<double>::iterator it_cont = cont.begin();
    std::deque<double>::iterator end_cont = cont.end();
    logger.reset_start();
    for (; it_cont != end_cont; ++it_cont) {
        test_deque.push_back(*it_cont);
    }
    logger.log_duration(len, "double", "deque;tail_insert");
}

void experiments::deque_str_tail_insert(std::deque<std::string> &cont, time_log::TimeLogger &logger) {
    std::deque<std::string> test_deque;
    const int len = cont.size();
    std::deque<std::string>::iterator it_cont = cont.begin();
    std::deque<std::string>::iterator end_cont = cont.end();
    logger.reset_start();
    for (; it_cont != end_cont; ++it_cont) {
        test_deque.push_back(*it_cont);
    }
    logger.log_duration(len, "string", "deque;tail_insert");
}
