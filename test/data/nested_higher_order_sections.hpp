const mstch::node nested_higher_order_sections_data = mstch::map{
  {"bold", mstch::lambda{[](const std::string& text, mstch::renderer render) {
    return std::string{"<b>"} + render(text) + std::string{"</b>"};
  }}},
  {"person", mstch::map{{"name", std::string{"Jonas"}}}}
};