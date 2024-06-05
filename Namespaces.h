#pragma once

#include <iostream>
#include <vector>
#include <list>
#include <deque>
#include <string>
#include <fstream>
#include <chrono>
#include <algorithm>

namespace data {
    ///< There is a directory with init data files.
    const std::string
            directory = "my_dir";
    const std::string out_file = "exp_time.csv";

    std::vector<std::string> make_paths(const std::string& part, const std::string& fold = directory);
    // склеивает имена файлов

    std::vector<char> load_vector_char(const std::string& path_file);

    // загружает данные определенного типа в определенный контейнер
    std::vector<int> load_vector_int(const std::string& path_file);

    std::vector<double> load_vector_double(const std::string& path_file);

    std::vector<std::string> load_vector_string(const std::string& path_file);

    std::list<char> load_list_char(const std::string& path_file);

    std::list<int> load_list_int(const std::string& path_file);

    std::list<double> load_list_double(const std::string& path_file);

    std::list<std::string> load_list_string(const std::string& path_file);

    std::deque<char> load_deque_char(const std::string& path_file);

    std::deque<int> load_deque_int(const std::string& path_file);

    std::deque<double> load_deque_double(const std::string& path_file);

    std::deque<std::string> load_deque_string(const std::string& path_file);
}

namespace time_log {
    class TimeLogger {
        // переопределение некоторых понятий
        using point = std::chrono::time_point<std::chrono::high_resolution_clock,
                                              std::chrono::nanoseconds>;
        using clock = std::chrono::high_resolution_clock;
    public:

        TimeLogger(const std::string& path_file) : file(path_file) {
            if (!file.is_open()) {
                throw std::runtime_error("Unable to open file");
            }
            file << "sep=;" << '\n';
            file << "duration, ns;size;type;container;experiment" << '\n';
        }

        void reset_start() {
            start = clock::now();
        }

        // вычисляет время, пишет результаты в файл
        void log_duration(const unsigned int size, const std::string& type, const std::string& msg) {
            file << (clock::now() - start).count() << ';' << size << ';' << type << ';' << msg << '\n';
        }

    private:
        std::ofstream file;
        point start;
    };
}

namespace experiments {
    const char char_not = '0'; // константы, которые не лежат в файлах
    const int int_not = -2147483648;
    const double double_not = 2.0;
    const std::string str_not = "00000";

    void exp_with_chars(const std::vector<std::string>& paths_vector, time_log::TimeLogger& logger);

    // с символами
    void vector_char_find(std::vector<char>& cont, time_log::TimeLogger& logger);

    // определенный эксперимент с определенным контейнером определенного типа
    void vector_char_head_insert(std::vector<char>& cont, time_log::TimeLogger& logger);

    void vector_char_tail_insert(std::vector<char>& cont, time_log::TimeLogger& logger);

    void vector_char_head_erase(std::vector<char> cont, time_log::TimeLogger& logger);

    void vector_char_tail_erase(std::vector<char> cont, time_log::TimeLogger& logger);

    void vector_char_sort(std::vector<char> cont, time_log::TimeLogger& logger);

    void list_char_find(std::list<char>& cont, time_log::TimeLogger& logger);

    void list_char_head_insert(std::list<char>& cont, time_log::TimeLogger& logger);

    void list_char_tail_insert(std::list<char>& cont, time_log::TimeLogger& logger);

    void list_char_head_erase(std::list<char> cont, time_log::TimeLogger& logger);

    void list_char_tail_erase(std::list<char> cont, time_log::TimeLogger& logger);

    void list_char_sort(std::list<char> cont, time_log::TimeLogger& logger);

    void deque_char_find(std::deque<char>& cont, time_log::TimeLogger& logger);

    void deque_char_head_insert(std::deque<char>& cont, time_log::TimeLogger& logger);

    void deque_char_tail_insert(std::deque<char>& cont, time_log::TimeLogger& logger);

    void deque_char_head_erase(std::deque<char> cont, time_log::TimeLogger& logger);

    void deque_char_tail_erase(std::deque<char> cont, time_log::TimeLogger& logger);

    void deque_char_sort(std::deque<char> cont, time_log::TimeLogger& logger);

    void exp_with_ints(const std::vector<std::string>& paths_vector, time_log::TimeLogger& logger);

    void vector_int_find(std::vector<int>& cont, time_log::TimeLogger& logger);

    void vector_int_head_insert(std::vector<int>& cont, time_log::TimeLogger& logger);

    void vector_int_tail_insert(std::vector<int>& cont, time_log::TimeLogger& logger);

    void vector_int_head_erase(std::vector<int> cont, time_log::TimeLogger& logger);

    void vector_int_tail_erase(std::vector<int> cont, time_log::TimeLogger& logger);

    void vector_int_sort(std::vector<int> cont, time_log::TimeLogger& logger);

    void list_int_find(std::list<int>& cont, time_log::TimeLogger& logger);

    void list_int_head_insert(std::list<int>& cont, time_log::TimeLogger& logger);

    void list_int_tail_insert(std::list<int>& cont, time_log::TimeLogger& logger);

    void list_int_head_erase(std::list<int> cont, time_log::TimeLogger& logger);

    void list_int_tail_erase(std::list<int> cont, time_log::TimeLogger& logger);

    void list_int_sort(std::list<int> cont, time_log::TimeLogger& logger);

    void deque_int_find(std::deque<int>& cont, time_log::TimeLogger& logger);

    void deque_int_head_insert(std::deque<int>& cont, time_log::TimeLogger& logger);

    void deque_int_tail_insert(std::deque<int>& cont, time_log::TimeLogger& logger);

    void deque_int_head_erase(std::deque<int> cont, time_log::TimeLogger& logger);

    void deque_int_tail_erase(std::deque<int> cont, time_log::TimeLogger& logger);

    void deque_int_sort(std::deque<int> cont, time_log::TimeLogger& logger);

    void exp_with_doubles(const std::vector<std::string>& paths_vector, time_log::TimeLogger& logger);

    void vector_double_find(std::vector<double>& cont, time_log::TimeLogger& logger);

    void vector_double_head_insert(std::vector<double>& cont, time_log::TimeLogger& logger);

    void vector_double_tail_insert(std::vector<double>& cont, time_log::TimeLogger& logger);

    void vector_double_head_erase(std::vector<double> cont, time_log::TimeLogger& logger);

    void vector_double_tail_erase(std::vector<double> cont, time_log::TimeLogger& logger);

    void vector_double_sort(std::vector<double> cont, time_log::TimeLogger& logger);

    void list_double_find(std::list<double>& cont, time_log::TimeLogger& logger);

    void list_double_head_insert(std::list<double>& cont, time_log::TimeLogger& logger);

    void list_double_tail_insert(std::list<double>& cont, time_log::TimeLogger& logger);

    void list_double_head_erase(std::list<double> cont, time_log::TimeLogger& logger);

    void list_double_tail_erase(std::list<double> cont, time_log::TimeLogger& logger);

    void list_double_sort(std::list<double> cont, time_log::TimeLogger& logger);

    void deque_double_find(std::deque<double>& cont, time_log::TimeLogger& logger);

    void deque_double_head_insert(std::deque<double>& cont, time_log::TimeLogger& logger);

    void deque_double_tail_insert(std::deque<double>& cont, time_log::TimeLogger& logger);

    void deque_double_head_erase(std::deque<double> cont, time_log::TimeLogger& logger);

    void deque_double_tail_erase(std::deque<double> cont, time_log::TimeLogger& logger);

    void deque_double_sort(std::deque<double> cont, time_log::TimeLogger& logger);

    void exp_with_strings(const std::vector<std::string>& paths_vector, time_log::TimeLogger& logger);

    void vector_str_find(std::vector<std::string>& cont, time_log::TimeLogger& logger);

    void vector_str_head_insert(std::vector<std::string>& cont, time_log::TimeLogger& logger);

    void vector_str_tail_insert(std::vector<std::string>& cont, time_log::TimeLogger& logger);

    void vector_str_head_erase(std::vector<std::string> cont, time_log::TimeLogger& logger);

    void vector_str_tail_erase(std::vector<std::string> cont, time_log::TimeLogger& logger);

    void vector_str_sort(std::vector<std::string> cont, time_log::TimeLogger& logger);

    void list_str_find(std::list<std::string>& cont, time_log::TimeLogger& logger);

    void list_str_head_insert(std::list<std::string>& cont, time_log::TimeLogger& logger);

    void list_str_tail_insert(std::list<std::string>& cont, time_log::TimeLogger& logger);

    void list_str_head_erase(std::list<std::string> cont, time_log::TimeLogger& logger);

    void list_str_tail_erase(std::list<std::string> cont, time_log::TimeLogger& logger);

    void list_str_sort(std::list<std::string> cont, time_log::TimeLogger& logger);

    void deque_str_find(std::deque<std::string>& cont, time_log::TimeLogger& logger);

    void deque_str_head_insert(std::deque<std::string>& cont, time_log::TimeLogger& logger);

    void deque_str_tail_insert(std::deque<std::string>& cont, time_log::TimeLogger& logger);

    void deque_str_head_erase(std::deque<std::string> cont, time_log::TimeLogger& logger);

    void deque_str_tail_erase(std::deque<std::string> cont, time_log::TimeLogger& logger);

    void deque_str_sort(std::deque<std::string> cont, time_log::TimeLogger& logger);

}
