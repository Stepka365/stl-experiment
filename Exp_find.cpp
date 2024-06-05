#include "Namespaces.h"

void experiments::vector_char_find(std::vector<char>& cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    std::vector<char>::iterator cont_beg = cont.begin();
    std::vector<char>::iterator cont_end = cont.end();
    logger.reset_start();
    std::find(cont_beg, cont_end, experiments::char_not);
    logger.log_duration(len, "char", "vector;find");
}

void experiments::vector_int_find(std::vector<int>& cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    std::vector<int>::iterator cont_beg = cont.begin();
    std::vector<int>::iterator cont_end = cont.end();
    logger.reset_start();
    std::find(cont_beg, cont_end, experiments::int_not);
    logger.log_duration(len, "int", "vector;find");
}

void experiments::vector_double_find(std::vector<double>& cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    std::vector<double>::iterator cont_beg = cont.begin();
    std::vector<double>::iterator cont_end = cont.end();
    logger.reset_start();
    std::find(cont_beg, cont_end, experiments::double_not);
    logger.log_duration(len, "double", "vector;find");
}

void experiments::vector_str_find(std::vector<std::string>& cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    std::vector<std::string>::iterator cont_beg = cont.begin();
    std::vector<std::string>::iterator cont_end = cont.end();
    logger.reset_start();
    std::find(cont_beg, cont_end, experiments::str_not);
    logger.log_duration(len, "string", "vector;find");
}

void experiments::list_char_find(std::list<char>& cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    std::list<char>::iterator cont_beg = cont.begin();
    std::list<char>::iterator cont_end = cont.end();
    logger.reset_start();
    std::find(cont_beg, cont_end, experiments::char_not);
    logger.log_duration(len, "char", "list;find");
}

void experiments::list_int_find(std::list<int>& cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    std::list<int>::iterator cont_beg = cont.begin();
    std::list<int>::iterator cont_end = cont.end();
    logger.reset_start();
    std::find(cont_beg, cont_end, experiments::int_not);
    logger.log_duration(len, "int", "list;find");
}

void experiments::list_double_find(std::list<double>& cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    std::list<double>::iterator cont_beg = cont.begin();
    std::list<double>::iterator cont_end = cont.end();
    logger.reset_start();
    std::find(cont_beg, cont_end, experiments::double_not);
    logger.log_duration(len, "double", "list;find");
}

void experiments::list_str_find(std::list<std::string>& cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    std::list<std::string>::iterator cont_beg = cont.begin();
    std::list<std::string>::iterator cont_end = cont.end();
    logger.reset_start();
    std::find(cont_beg, cont_end, experiments::str_not);
    logger.log_duration(len, "string", "list;find");
}

void experiments::deque_char_find(std::deque<char>& cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    std::deque<char>::iterator cont_beg = cont.begin();
    std::deque<char>::iterator cont_end = cont.end();
    logger.reset_start();
    std::find(cont_beg, cont_end, experiments::char_not);
    logger.log_duration(len, "char", "deque;find");
}

void experiments::deque_int_find(std::deque<int>& cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    std::deque<int>::iterator cont_beg = cont.begin();
    std::deque<int>::iterator cont_end = cont.end();
    logger.reset_start();
    std::find(cont_beg, cont_end, experiments::int_not);
    logger.log_duration(len, "int", "deque;find");
}

void experiments::deque_double_find(std::deque<double>& cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    std::deque<double>::iterator cont_beg = cont.begin();
    std::deque<double>::iterator cont_end = cont.end();
    logger.reset_start();
    std::find(cont_beg, cont_end, experiments::double_not);
    logger.log_duration(len, "double", "deque;find");
}

void experiments::deque_str_find(std::deque<std::string>& cont, time_log::TimeLogger& logger) {
    const int len = cont.size();
    std::deque<std::string>::iterator cont_beg = cont.begin();
    std::deque<std::string>::iterator cont_end = cont.end();
    logger.reset_start();
    std::find(cont_beg, cont_end, experiments::str_not);
    logger.log_duration(len, "string", "deque;find");
}
