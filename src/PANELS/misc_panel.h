#pragma once

class MiscPanel;

#include "../UI/stdui.h"
#include "../atgui.h"
#include "../util.h"
#include "../namechanger.h"

class MiscPanel : public Panel
{
private:
	Banner* ba_movement;
	ToggleSwitch* ts_bhop;
	ToggleSwitch* ts_autostrafe;
	ToggleSwitch* ts_airstuck;
	Banner* ba_spammer;
	ToggleSwitch* ts_position_spammer;
	ToggleSwitch* ts_kill_spammer;
	ToggleSwitch* ts_normal_spammer;
	Banner* ba_other;
	ToggleSwitch* ts_noflash;
	Slider* sl_noflash_value;
	ToggleSwitch* ts_showranks;
	ToggleSwitch* ts_showspectators;
	OutlinedButton* ob_nickname;
	ValueTextBox* vtb_nickname;
	OutlinedButton* ob_noname;
	ToggleSwitch* ts_clantag;
	TextBox* tb_clantag;
	ToggleSwitch* ts_clantag_animation;
	Banner* ba_colors;
	OutlinedButton* bn_ui_color;
	OutlinedButton* bn_2_color;
	OutlinedButton* bn_3_color;

public:
	MiscPanel (Vector2D position, Vector2D size);
	
	void bn_ui_color_clicked ();
	void ob_nickname_clicked ();
	void ob_noname_clicked ();
};
