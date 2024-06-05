#include "Namespaces.h"

void
experiments::exp_with_chars(const std::vector<std::string>& paths_vector, time_log::TimeLogger& logger) {
    for (int i = 0; i < paths_vector.size(); ++i) { // перебирает файлы
        std::vector<char> cur_vector = data::load_vector_char(paths_vector[i]); // сгружает в контейнер
        experiments::vector_char_find(cur_vector, logger); // проводит эксперименты
        experiments::vector_char_head_insert(cur_vector, logger); // hard
        experiments::vector_char_tail_insert(cur_vector, logger);
        experiments::vector_char_head_erase(cur_vector, logger); // hard
        experiments::vector_char_tail_erase(cur_vector, logger);
        experiments::vector_char_sort(cur_vector, logger);

        std::list<char> cur_list = data::load_list_char(paths_vector[i]); // сгружает в другой контейнер
        experiments::list_char_find(cur_list, logger);
        experiments::list_char_head_insert(cur_list, logger);
        experiments::list_char_tail_insert(cur_list, logger);
        experiments::list_char_head_erase(cur_list, logger);
        experiments::list_char_tail_erase(cur_list, logger);
        experiments::list_char_sort(cur_list, logger);

        std::deque<char> cur_deque = data::load_deque_char(paths_vector[i]);
        experiments::deque_char_find(cur_deque, logger);
        experiments::deque_char_head_insert(cur_deque, logger);
        experiments::deque_char_tail_insert(cur_deque, logger);
        experiments::deque_char_head_erase(cur_deque, logger);
        experiments::deque_char_tail_erase(cur_deque, logger);
        experiments::deque_char_sort(cur_deque, logger);
    }
}

void
experiments::exp_with_ints(const std::vector<std::string>& paths_vector, time_log::TimeLogger& logger) {
    for (int i = 0; i < paths_vector.size(); ++i) {
        std::vector<int> cur_vector = data::load_vector_int(paths_vector[i]);
        experiments::vector_int_find(cur_vector, logger);
        experiments::vector_int_head_insert(cur_vector, logger);
        experiments::vector_int_tail_insert(cur_vector, logger);
        experiments::vector_int_head_erase(cur_vector, logger);
        experiments::vector_int_tail_erase(cur_vector, logger);
        experiments::vector_int_sort(cur_vector, logger);

        std::list<int> cur_list = data::load_list_int(paths_vector[i]);
        experiments::list_int_find(cur_list, logger);
        experiments::list_int_head_insert(cur_list, logger);
        experiments::list_int_tail_insert(cur_list, logger);
        experiments::list_int_head_erase(cur_list, logger);
        experiments::list_int_tail_erase(cur_list, logger);
        experiments::list_int_sort(cur_list, logger);

        std::deque<int> cur_deque = data::load_deque_int(paths_vector[i]);
        experiments::deque_int_find(cur_deque, logger);
        experiments::deque_int_head_insert(cur_deque, logger);
        experiments::deque_int_tail_insert(cur_deque, logger);
        experiments::deque_int_head_erase(cur_deque, logger);
        experiments::deque_int_tail_erase(cur_deque, logger);
        experiments::deque_int_sort(cur_deque, logger);
    }
}

void experiments::exp_with_doubles(const std::vector<std::string>& paths_vector,
                                   time_log::TimeLogger& logger) {
    for (int i = 0; i < paths_vector.size(); ++i) {
        std::vector<double> cur_vector = data::load_vector_double(paths_vector[i]);
        experiments::vector_double_find(cur_vector, logger);
        experiments::vector_double_head_insert(cur_vector, logger);
        experiments::vector_double_tail_insert(cur_vector, logger);
        experiments::vector_double_head_erase(cur_vector, logger);
        experiments::vector_double_tail_erase(cur_vector, logger);
        experiments::vector_double_sort(cur_vector, logger);

        std::list<double> cur_list = data::load_list_double(paths_vector[i]);
        experiments::list_double_find(cur_list, logger);
        experiments::list_double_head_insert(cur_list, logger);
        experiments::list_double_tail_insert(cur_list, logger);
        experiments::list_double_head_erase(cur_list, logger);
        experiments::list_double_tail_erase(cur_list, logger);
        experiments::list_double_sort(cur_list, logger);

        std::deque<double> cur_deque = data::load_deque_double(paths_vector[i]);
        experiments::deque_double_find(cur_deque, logger);
        experiments::deque_double_head_insert(cur_deque, logger);
        experiments::deque_double_tail_insert(cur_deque, logger);
        experiments::deque_double_head_erase(cur_deque, logger);
        experiments::deque_double_tail_erase(cur_deque, logger);
        experiments::deque_double_sort(cur_deque, logger);
    }
}

void experiments::exp_with_strings(const std::vector<std::string>& paths_vector,
                                   time_log::TimeLogger& logger) {
    for (int i = 0; i < paths_vector.size(); ++i) {
        std::vector<std::string> cur_vector = data::load_vector_string(paths_vector[i]);
        experiments::vector_str_find(cur_vector, logger);
        experiments::vector_str_head_insert(cur_vector, logger);
        experiments::vector_str_tail_insert(cur_vector, logger);
        experiments::vector_str_head_erase(cur_vector, logger);
        experiments::vector_str_tail_erase(cur_vector, logger);
        experiments::vector_str_sort(cur_vector, logger);

        std::list<std::string> cur_list = data::load_list_string(paths_vector[i]);
        experiments::list_str_find(cur_list, logger);
        experiments::list_str_head_insert(cur_list, logger);
        experiments::list_str_tail_insert(cur_list, logger);
        experiments::list_str_head_erase(cur_list, logger);
        experiments::list_str_tail_erase(cur_list, logger);
        experiments::list_str_sort(cur_list, logger);

        std::deque<std::string> cur_deque = data::load_deque_string(paths_vector[i]);
        experiments::deque_str_find(cur_deque, logger);
        experiments::deque_str_head_insert(cur_deque, logger);
        experiments::deque_str_tail_insert(cur_deque, logger);
        experiments::deque_str_head_erase(cur_deque, logger);
        experiments::deque_str_tail_erase(cur_deque, logger);
        experiments::deque_str_sort(cur_deque, logger);
    }
}
