/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRViewController.h"

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface SettingsRemoteLearningController : BRViewController {
	NSDictionary *_remoteDictionary;	// 104 = 0x68
	int _currentLearningButton;	// 108 = 0x6c
	int _firstLearningButton;	// 112 = 0x70
	int _lastLearningButton;	// 116 = 0x74
	BOOL _editingExtendedCodes;	// 120 = 0x78
	BOOL _reRecordingBasicButtons;	// 121 = 0x79
	BOOL _showingBasicSetupCompleteMessage;	// 122 = 0x7a
}
- (id)init;	// 0xa1df9
- (void).cxx_destruct;	// 0xa2375
- (void)_advanceToNextLearningButton;	// 0xa2875
- (void)_beginExtendedRemoteSetup;	// 0xa3ae5
- (void)_buttonExistsOptionSelected:(id)selected;	// 0xa2f25
- (id)_defaultCustomName;	// 0xa3651
- (id)_dictionaryForRemoteWithName:(id)name;	// 0xa2fdd
- (BOOL)_goToPreviousLearningButton;	// 0xa2831
- (void)_learnCurrentButton;	// 0xa2bf9
- (id)_learningView;	// 0xa2821
- (id)_localizedString:(id)string;	// 0xa2d25
- (void)_nameCustomRemoteSet;	// 0xa319d
- (void)_process3rdPartyCaptureDone:(id)done;	// 0xa2685
- (void)_process3rdPartyDuplicate:(id)duplicate;	// 0xa262d
- (void)_process3rdPartyError:(id)error;	// 0xa2389
- (void)_process3rdPartyProgress:(id)progress;	// 0xa2465
- (void)_process3rdPartySuccess:(id)success;	// 0xa27c9
- (BOOL)_remoteHasExtendedButtons:(id)buttons;	// 0xa3149
- (void)_showBasicCompleteMessage;	// 0xa3741
- (void)_showBasicCompleteMessageOptionSelected:(id)selected;	// 0xa39f1
- (void)_showButtonExistsMessage;	// 0xa2d39
- (void)_startLearningCurrentButton;	// 0xa2919
- (void)_usagePageAndCodeForCurrentButton:(XXStruct_ny2fMB *)currentButton;	// 0xa2c91
- (id)accessibilityLabel;	// 0xa22a5
- (BOOL)brEventAction:(id)action;	// 0xa21b5
- (BOOL)isAccessibilityElement;	// 0xa22a1
- (void)setRemoteSetToEdit:(id)edit forExtendedCodes:(BOOL)extendedCodes;	// 0xa213d
- (void)wasExhumed;	// 0xa20d5
- (void)wasPopped;	// 0xa2051
- (void)wasPushed;	// 0xa1efd
@end

