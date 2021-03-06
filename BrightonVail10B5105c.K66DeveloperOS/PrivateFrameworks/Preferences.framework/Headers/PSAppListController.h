/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSListController.h"


@interface PSAppListController : PSListController {
}
- (id)_localizedTitlesFromUnlocalizedTitles:(id)unlocalizedTitles stringsTable:(id)table;	// 0x3161e09d
- (id)_readToggleSwitchSpecifierValue:(id)value;	// 0x3161de25
- (void)_setToggleSwitchSpecifierValue:(id)value specifier:(id)specifier;	// 0x3161dfb9
- (id)_uiValueFromValue:(id)value specifier:(id)specifier;	// 0x3161dd3d
- (id)_valueFromUIValue:(id)uivalue specifier:(id)specifier;	// 0x3161dda1
- (id)bundle;	// 0x3161fd95
- (id)childPaneSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x3161f609
- (id)groupSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x3161e215
- (id)multiValueSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x3161f345
- (void)postThirdPartySettingDidChangeNotificationForSpecifier:(id)postThirdPartySetting;	// 0x3161e171
- (id)radioGroupSpecifiersFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x3161e3fd
- (void)setPreferenceValue:(id)value specifier:(id)specifier;	// 0x3161e1d1
- (id)sliderSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x3161ee35
- (id)specifiers;	// 0x3161fa49
- (id)specifiersFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x3161f739
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x3161fcb1
- (id)textFieldSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x3161e7c9
- (id)titleValueSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x3161f121
- (id)toggleSwitchSpecifierFromDictionary:(id)dictionary stringsTable:(id)table;	// 0x3161ec2d
@end

