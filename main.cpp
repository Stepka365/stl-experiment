#include "Namespaces.h"


int main() {
    time_log::TimeLogger huge_logger("funny.csv");
    huge_logger.reset_start();

    std::vector<std::string> chars_files = data::make_paths("chars", data::folder); // делает файлы
    std::vector<std::string> ints_files = data::make_paths("ints", data::folder);
    std::vector<std::string> doubles_files = data::make_paths("doubles", data::folder);
    std::vector<std::string> str_files = data::make_paths("strings", data::folder);

    time_log::TimeLogger exp_logger(data::out_file); // конструирует логгер
    experiments::exp_with_chars(chars_files, exp_logger); // осуществляет эксперименты
    experiments::exp_with_ints(ints_files, exp_logger);
    experiments::exp_with_doubles(doubles_files, exp_logger);
    experiments::exp_with_strings(str_files, exp_logger);

    huge_logger.log_duration(0, "all", "It is the time of all experiments"); // 10.1
    return 0;
}
