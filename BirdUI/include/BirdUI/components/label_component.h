#pragma once
#include <string>
#include "base_component.h"

class bird_label_component_t : public bird_component_t
{
public:
	bird_label_component_t(uint32_t x, uint32_t y, std::string label)
		: bird_component_t(position_t{x, y}, dimension_t{0, 0}, true, false)
	{
		label_text = label;
	}

	CREATE_STATIC_CTORS(bird_label_component_t);

	void set_text(std::string text);
	std::string get_text();

private:
	void render() override;

	std::string label_text;
};