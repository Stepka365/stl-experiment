#include "Namespaces.h"

void experiments::vector_char_head_insert(std::vector<char>& cont, time_log::TimeLogger& logger) {
    std::vector<char> test_vector;
    const int len = cont.size();
    logger.reset_start();
    for (int i = len - 1; i >= 0; --i) {
        test_vector.insert(test_vector.begin(), cont[i]);
    }
    logger.log_duration(len, "char", "vector;head_insert");

    std::vector<char> test2_vector;
    test2_vector.reserve(len);
    logger.reset_start();
    for (int i = len - 1; i >= 0; --i) {
        test2_vector.insert(test2_vector.begin(), cont[i]);
    }
    logger.log_duration(len, "char", "vector;head_insert_reserve");
}

void experiments::vector_int_head_insert(std::vector<int>& cont, time_log::TimeLogger& logger) {
    std::vector<int> test_vector;
    const int len = cont.size();
    std::vector<int>::iterator beg = test_vector.begin();
    logger.reset_start();
    for (int i = len - 1; i >= 0; --i) {
        beg = test_vector.insert(beg, cont[i]);
    }
    logger.log_duration(len, "int", "vector;head_insert");

    std::vector<int> test2_vector;
    test2_vector.reserve(len);
    beg = test2_vector.begin();
    logger.reset_start();
    for (int i = len - 1; i >= 0; --i) {
        beg = test2_vector.insert(beg, cont[i]);
    }
    logger.log_duration(len, "int", "vector;head_insert_reserve");
}

void experiments::vector_double_head_insert(std::vector<double>& cont, time_log::TimeLogger& logger) {
    std::vector<double> test_vector;
    const int len = cont.size();
    std::vector<double>::iterator beg = test_vector.begin();
    logger.reset_start();
    for (int i = len - 1; i >= 0; --i) {
        beg = test_vector.insert(beg, cont[i]);
    }
    logger.log_duration(len, "double", "vector;head_insert");

    std::vector<double> test2_vector;
    test2_vector.reserve(len);
    beg = test2_vector.begin();
    logger.reset_start();
    for (int i = len - 1; i >= 0; --i) {
        beg = test2_vector.insert(beg, cont[i]);
    }
    logger.log_duration(len, "double", "vector;head_insert_reserve");
}

void experiments::vector_str_head_insert(std::vector<std::string>& cont, time_log::TimeLogger& logger) {
    std::vector<std::string> test_vector;
    const int len = cont.size();
    std::vector<std::string>::iterator beg = test_vector.begin();
    logger.reset_start();
    for (int i = len - 1; i >= 0; --i) {
        beg = test_vector.insert(beg, cont[i]);
    }
    logger.log_duration(len, "string", "vector;head_insert");

    std::vector<std::string> test2_vector;
    test2_vector.reserve(len);
    beg = test2_vector.begin();
    logger.reset_start();
    for (int i = len - 1; i >= 0; --i) {
        beg = test2_vector.insert(beg, cont[i]);
    }
    logger.log_duration(len, "string", "vector;head_insert_reserve");
}

void experiments::list_char_head_insert(std::list<char>& cont, time_log::TimeLogger& logger) {
    std::list<char> test_list;
    const int len = cont.size();
    std::list<char>::reverse_iterator it_cont = cont.rbegin();
    std::list<char>::reverse_iterator cont_beg = cont.rend();
    logger.reset_start();
    for (; it_cont != cont_beg; ++it_cont) {
        test_list.push_front(*it_cont);
    }
    logger.log_duration(len, "char", "list;head_insert");
}

void experiments::list_int_head_insert(std::list<int>& cont, time_log::TimeLogger& logger) {
    std::list<int> test_list;
    const int len = cont.size();
    std::list<int>::reverse_iterator it_cont = cont.rbegin();
    std::list<int>::reverse_iterator cont_beg = cont.rend();
    logger.reset_start();
    for (; it_cont != cont_beg; ++it_cont) {
        test_list.push_front(*it_cont);
    }
    logger.log_duration(len, "int", "list;head_insert");
}

void experiments::list_double_head_insert(std::list<double>& cont, time_log::TimeLogger& logger) {
    std::list<double> test_list;
    const int len = cont.size();
    std::list<double>::reverse_iterator it_cont = cont.rbegin();
    std::list<double>::reverse_iterator cont_beg = cont.rend();
    logger.reset_start();
    for (; it_cont != cont_beg; ++it_cont) {
        test_list.push_front(*it_cont);
    }
    logger.log_duration(len, "double", "list;head_insert");
}

void experiments::list_str_head_insert(std::list<std::string>& cont, time_log::TimeLogger& logger) {
    std::list<std::string> test_list;
    const int len = cont.size();
    std::list<std::string>::reverse_iterator it_cont = cont.rbegin();
    std::list<std::string>::reverse_iterator cont_beg = cont.rend();
    logger.reset_start();
    for (; it_cont != cont_beg; ++it_cont) {
        test_list.push_front(*it_cont);
    }
    logger.log_duration(len, "string", "list;head_insert");
}

void experiments::deque_char_head_insert(std::deque<char>& cont, time_log::TimeLogger& logger) {
    std::deque<char> test_deque;
    const int len = cont.size();
    std::deque<char>::reverse_iterator it_cont = cont.rbegin();
    std::deque<char>::reverse_iterator cont_beg = cont.rend();
    logger.reset_start();
    for (; it_cont != cont_beg; ++it_cont) {
        test_deque.push_front(*it_cont);
    }
    logger.log_duration(len, "char", "deque;head_insert");
}

void experiments::deque_int_head_insert(std::deque<int>& cont, time_log::TimeLogger& logger) {
    std::deque<int> test_deque;
    const int len = cont.size();
    std::deque<int>::reverse_iterator it_cont = cont.rbegin();
    std::deque<int>::reverse_iterator cont_beg = cont.rend();
    logger.reset_start();
    for (; it_cont != cont_beg; ++it_cont) {
        test_deque.push_front(*it_cont);
    }
    logger.log_duration(len, "int", "deque;head_insert");
}

void experiments::deque_double_head_insert(std::deque<double>& cont, time_log::TimeLogger& logger) {
    std::deque<double> test_deque;
    const int len = cont.size();
    std::deque<double>::reverse_iterator it_cont = cont.rbegin();
    std::deque<double>::reverse_iterator cont_beg = cont.rend();
    logger.reset_start();
    for (; it_cont != cont_beg; ++it_cont) {
        test_deque.push_front(*it_cont);
    }
    logger.log_duration(len, "double", "deque;head_insert");
}

void experiments::deque_str_head_insert(std::deque<std::string>& cont, time_log::TimeLogger& logger) {
    std::deque<std::string> test_deque;
    const int len = cont.size();
    std::deque<std::string>::reverse_iterator it_cont = cont.rbegin();
    std::deque<std::string>::reverse_iterator cont_beg = cont.rend();
    logger.reset_start();
    for (; it_cont != cont_beg; ++it_cont) {
        test_deque.push_front(*it_cont);
    }
    logger.log_duration(len, "string", "deque;head_insert");
}
