/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "Preferences-Structs.h"
#import "PSListController.h"

@class PSSpecifier, PrefsUILinkLabel;

@interface ProblemReportingController : PSListController {
	PrefsUILinkLabel *_aboutDiagnosticsLinkLabel;	// 284 = 0x11c
	PSSpecifier *_diagnosticDataGroupSpecifier;	// 288 = 0x120
}
+ (BOOL)isProblemReportingEnabled;	// 0x34dc52c1
- (void)dealloc;	// 0x34dc5b85
- (void)diagnosticsDonePressed:(id)pressed;	// 0x34dc5325
- (void)setProblemReportingEnabled:(BOOL)enabled;	// 0x34dc549d
- (BOOL)shouldEnableProblemReportingForCheckedSpecifier;	// 0x34dc5ac9
- (void)showAboutDiagnosticsSheet:(id)sheet;	// 0x34dc5339
- (id)specifiers;	// 0x34dc55b9
- (void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;	// 0x34dc5b31
- (Class)tableViewClass;	// 0x34dc5309
- (void)viewDidLoad;	// 0x34dc544d
@end
