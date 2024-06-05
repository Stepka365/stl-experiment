#include "Namespaces.h"

void experiments::vector_char_tail_erase(std::vector<char>cont, time_log::TimeLogger &logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_back();
    }
    logger.log_duration(len, "char", "vector;tail_erase");
}

void experiments::vector_int_tail_erase(std::vector<int>cont, time_log::TimeLogger &logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_back();
    }
    logger.log_duration(len, "int", "vector;tail_erase");
}

void experiments::vector_double_tail_erase(std::vector<double>cont, time_log::TimeLogger &logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_back();
    }
    logger.log_duration(len, "double", "vector;tail_erase");
}

void experiments::vector_str_tail_erase(std::vector<std::string>cont, time_log::TimeLogger &logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_back();
    }
    logger.log_duration(len, "string", "vector;tail_erase");
}

void experiments::list_char_tail_erase(std::list<char>cont, time_log::TimeLogger &logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_back();
    }
    logger.log_duration(len, "char", "list;tail_erase");
}

void experiments::list_int_tail_erase(std::list<int>cont, time_log::TimeLogger &logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_back();
    }
    logger.log_duration(len, "int", "list;tail_erase");
}

void experiments::list_double_tail_erase(std::list<double>cont, time_log::TimeLogger &logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_back();
    }
    logger.log_duration(len, "double", "list;tail_erase");
}

void experiments::list_str_tail_erase(std::list<std::string>cont, time_log::TimeLogger &logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_back();
    }
    logger.log_duration(len, "string", "list;tail_erase");
}

void experiments::deque_char_tail_erase(std::deque<char>cont, time_log::TimeLogger &logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_back();
    }
    logger.log_duration(len, "char", "deque;tail_erase");
}

void experiments::deque_int_tail_erase(std::deque<int>cont, time_log::TimeLogger &logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_back();
    }
    logger.log_duration(len, "int", "deque;tail_erase");
}

void experiments::deque_double_tail_erase(std::deque<double>cont, time_log::TimeLogger &logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_back();
    }
    logger.log_duration(len, "double", "deque;tail_erase");
}

void experiments::deque_str_tail_erase(std::deque<std::string>cont, time_log::TimeLogger &logger) {
    const int len = cont.size();
    logger.reset_start();
    while (!cont.empty()) {
        cont.pop_back();
    }
    logger.log_duration(len, "string", "deque;tail_erase");
}
