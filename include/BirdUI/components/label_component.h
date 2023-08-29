#pragma once
#include <string>

#include "base_component.h"

class feather_label_component_t : public feather_component_t
{
public:
	feather_label_component_t(uint32_t x, uint32_t y, std::string label)
		: feather_component_t(position_t{x, y}, dimension_t{0, 0}, true, false)
	{
		label_text = label;
	}

	template <typename... Args>
	static std::shared_ptr<feather_label_component_t> create(Args&&... args)
	{
		return std::make_shared<feather_label_component_t>(std::forward<Args>(args)...);
	}

	void set_text(std::string text);
	std::string get_text();

private:
	std::string label_text;

	void render() override;
};