#include "Namespaces.h"

void experiments::vector_char_sort(std::vector<char> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    std::sort(cont.begin(), cont.end());
    logger.log_duration(len, "char", "vector;sort");
}

void experiments::vector_int_sort(std::vector<int> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    std::sort(cont.begin(), cont.end());
    logger.log_duration(len, "int", "vector;sort");
}

void experiments::vector_double_sort(std::vector<double> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    std::sort(cont.begin(), cont.end());
    logger.log_duration(len, "double", "vector;sort");
}

void experiments::vector_str_sort(std::vector<std::string> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    std::sort(cont.begin(), cont.end());
    logger.log_duration(len, "string", "vector;sort");
}

void experiments::list_char_sort(std::list<char> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    cont.sort();
    logger.log_duration(len, "char", "list;sort");
}

void experiments::list_int_sort(std::list<int> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    cont.sort();
    logger.log_duration(len, "int", "list;sort");
}

void experiments::list_double_sort(std::list<double> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    cont.sort();
    logger.log_duration(len, "double", "list;sort");
}

void experiments::list_str_sort(std::list<std::string> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    cont.sort();
    logger.log_duration(len, "string", "list;sort");
}

void experiments::deque_char_sort(std::deque<char> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    std::sort(cont.begin(), cont.end());
    logger.log_duration(len, "char", "deque;sort");
}

void experiments::deque_int_sort(std::deque<int> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    std::sort(cont.begin(), cont.end());
    logger.log_duration(len, "int", "deque;sort");
}

void experiments::deque_double_sort(std::deque<double> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    std::sort(cont.begin(), cont.end());
    logger.log_duration(len, "double", "deque;sort");
}

void experiments::deque_str_sort(std::deque<std::string> cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    logger.reset_start();
    std::sort(cont.begin(), cont.end());
    logger.log_duration(len, "string", "deque;sort");
}
