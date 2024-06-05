#include "Namespaces.h"

void experiments::vector_char_head_erase(std::vector<char> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    std::vector<char>::iterator beg = cont.begin();
    logger.reset_start();
    while (!cont.empty()) {
        beg = cont.erase(beg);
    }
    logger.log_duration(len, "char", "vector;head_erase");
}

void experiments::vector_int_head_erase(std::vector<int> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    std::vector<int>::iterator beg = cont.begin();
    logger.reset_start();
    while (!cont.empty()) {
        beg = cont.erase(beg);
    }
    logger.log_duration(len, "int", "vector;head_erase");
}

void experiments::vector_double_head_erase(std::vector<double> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    std::vector<double>::iterator beg = cont.begin();
    logger.reset_start();
    while (!cont.empty()) {
        beg = cont.erase(beg);
    }
    logger.log_duration(len, "double", "vector;head_erase");
}

void experiments::vector_str_head_erase(std::vector<std::string> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    std::vector<std::string>::iterator beg = cont.begin();
    logger.reset_start();
    while (!cont.empty()) {
        beg = cont.erase(beg);
    }
    logger.log_duration(len, "string", "vector;head_erase");
}

void experiments::list_char_head_erase(std::list<char> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_front();
    }
    logger.log_duration(len, "char", "list;head_erase");
}

void experiments::list_int_head_erase(std::list<int> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_front();
    }
    logger.log_duration(len, "int", "list;head_erase");
}

void experiments::list_double_head_erase(std::list<double> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_front();
    }
    logger.log_duration(len, "double", "list;head_erase");
}

void experiments::list_str_head_erase(std::list<std::string> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_front();
    }
    logger.log_duration(len, "string", "list;head_erase");
}

void experiments::deque_char_head_erase(std::deque<char> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_front();
    }
    logger.log_duration(len, "char", "deque;head_erase");
}

void experiments::deque_int_head_erase(std::deque<int> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_front();
    }
    logger.log_duration(len, "int", "deque;head_erase");
}

void experiments::deque_double_head_erase(std::deque<double> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_front();
    }
    logger.log_duration(len, "double", "deque;head_erase");
}

void experiments::deque_str_head_erase(std::deque<std::string> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_front();
    }
    logger.log_duration(len, "string", "deque;head_erase");
}
