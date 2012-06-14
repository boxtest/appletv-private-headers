/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "BRTextFieldDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVCFUserNotificationViewController : XXUnknownSuperclass <BRTextFieldDelegate> {
	unsigned replyPort;	// 4 = 0x4
	int requestFlags;	// 8 = 0x8
	unsigned replyFlags;	// 12 = 0xc
	int token;	// 16 = 0x10
	int timeout;	// 20 = 0x14
	BOOL shouldCancel;	// 24 = 0x18
	double creationTime;	// 28 = 0x1c
	NSString *alertHeader;	// 36 = 0x24
	NSString *alertMessage;	// 40 = 0x28
	NSString *alertMessageDelimiter;	// 44 = 0x2c
	NSString *defaultButtonTitle;	// 48 = 0x30
	NSString *alternateButtonTitle;	// 52 = 0x34
	NSString *otherButtonTitle;	// 56 = 0x38
	id textFieldTitles;	// 60 = 0x3c
	id textFieldInitialValues;	// 64 = 0x40
	id textFieldEnteredValues;	// 68 = 0x44
	BOOL _isActivated;	// 72 = 0x48
	int _defaultButtonTag;	// 76 = 0x4c
	int _defaultButtonIndex;	// 80 = 0x50
	int _dialogDefaultButtonIndex;	// 84 = 0x54
	BOOL _activated;	// 88 = 0x58
	int _alternateButtonIndex;	// 92 = 0x5c
	int _otherButtonIndex;	// 96 = 0x60
}
@property(assign, nonatomic, getter=isActivated) BOOL activated;	// G=0x392889; S=0x392909; @synthesize=_activated
@property(retain, nonatomic) NSString *alertHeader;	// G=0x3926cd; S=0x3926dd; @synthesize
@property(retain, nonatomic) NSString *alertMessage;	// G=0x392705; S=0x392715; @synthesize
@property(retain, nonatomic) NSString *alertMessageDelimiter;	// G=0x39273d; S=0x39274d; @synthesize
@property(assign, nonatomic) int alternateButtonIndex;	// G=0x392919; S=0x392929; @synthesize=_alternateButtonIndex
@property(retain, nonatomic) NSString *alternateButtonTitle;	// G=0x3927ad; S=0x3927bd; @synthesize
@property(assign, nonatomic) double creationTime;	// G=0x3926a1; S=0x3926b9; @synthesize
@property(assign, nonatomic) int defaultButtonIndex;	// G=0x3928c9; S=0x3928d9; @synthesize=_defaultButtonIndex
@property(assign, nonatomic) int defaultButtonTag;	// G=0x3928a9; S=0x3928b9; @synthesize=_defaultButtonTag
@property(retain, nonatomic) NSString *defaultButtonTitle;	// G=0x392775; S=0x392785; @synthesize
@property(assign, nonatomic) int dialogDefaultButtonIndex;	// G=0x3928e9; S=0x3928f9; @synthesize=_dialogDefaultButtonIndex
@property(assign, nonatomic) BOOL isActivated;	// G=0x392889; S=0x392899; @synthesize=_isActivated
@property(assign, nonatomic) int otherButtonIndex;	// G=0x392939; S=0x392949; @synthesize=_otherButtonIndex
@property(retain, nonatomic) NSString *otherButtonTitle;	// G=0x3927e5; S=0x3927f5; @synthesize
@property(assign, nonatomic) unsigned replyFlags;	// G=0x392621; S=0x392631; @synthesize
@property(assign, nonatomic) unsigned replyPort;	// G=0x3925e1; S=0x3925f1; @synthesize
@property(assign, nonatomic) int requestFlags;	// G=0x392601; S=0x392611; @synthesize
@property(assign, nonatomic) BOOL shouldCancel;	// G=0x392681; S=0x392691; @synthesize
@property(retain, nonatomic) id textFieldEnteredValues;	// G=0x392865; S=0x392875; @synthesize
@property(retain, nonatomic) id textFieldInitialValues;	// G=0x392841; S=0x392851; @synthesize
@property(retain, nonatomic) id textFieldTitles;	// G=0x39281d; S=0x39282d; @synthesize
@property(assign, nonatomic) int timeout;	// G=0x392661; S=0x392671; @synthesize
@property(assign, nonatomic) int token;	// G=0x392641; S=0x392651; @synthesize
- (id)initWithMessage:(id)message replyPort:(unsigned)port requestFlags:(int)flags;	// 0x390775
- (id)initWithNibName:(id)nibName bundle:(id)bundle;	// 0x390769
- (void).cxx_destruct;	// 0x392959
- (void)_activate;	// 0x391329
- (void)_configurePasswordTextEntryDialog:(id)dialog;	// 0x392425
- (void)_configureUsernameTextEntryDialog:(id)dialog;	// 0x392199
- (void)_dismiss;	// 0x391e71
- (BOOL)_isOptionDialog;	// 0x39208d
- (BOOL)_isTermsAndConditionDialog;	// 0x392155
- (BOOL)_isTextFieldDialog;	// 0x392129
- (id)_safeLocalizedValue:(id)value withBundle:(id)bundle;	// 0x3910fd
- (void)_sendResponse:(int)response;	// 0x391e75
// declared property getter: - (id)alertHeader;	// 0x3926cd
// declared property getter: - (id)alertMessage;	// 0x392705
// declared property getter: - (id)alertMessageDelimiter;	// 0x39273d
// declared property getter: - (int)alternateButtonIndex;	// 0x392919
// declared property getter: - (id)alternateButtonTitle;	// 0x3927ad
- (void)cancel;	// 0x3910bd
// declared property getter: - (double)creationTime;	// 0x3926a1
// declared property getter: - (int)defaultButtonIndex;	// 0x3928c9
// declared property getter: - (int)defaultButtonTag;	// 0x3928a9
// declared property getter: - (id)defaultButtonTitle;	// 0x392775
// declared property getter: - (int)dialogDefaultButtonIndex;	// 0x3928e9
// declared property getter: - (BOOL)isActivated;	// 0x392889
// declared property getter: - (BOOL)isActivated;	// 0x392889
// declared property getter: - (int)otherButtonIndex;	// 0x392939
// declared property getter: - (id)otherButtonTitle;	// 0x3927e5
// declared property getter: - (unsigned)replyFlags;	// 0x392621
// declared property getter: - (unsigned)replyPort;	// 0x3925e1
// declared property getter: - (int)requestFlags;	// 0x392601
// declared property setter: - (void)setActivated:(BOOL)activated;	// 0x392909
// declared property setter: - (void)setAlertHeader:(id)header;	// 0x3926dd
// declared property setter: - (void)setAlertMessage:(id)message;	// 0x392715
// declared property setter: - (void)setAlertMessageDelimiter:(id)delimiter;	// 0x39274d
// declared property setter: - (void)setAlternateButtonIndex:(int)index;	// 0x392929
// declared property setter: - (void)setAlternateButtonTitle:(id)title;	// 0x3927bd
// declared property setter: - (void)setCreationTime:(double)time;	// 0x3926b9
// declared property setter: - (void)setDefaultButtonIndex:(int)index;	// 0x3928d9
// declared property setter: - (void)setDefaultButtonTag:(int)tag;	// 0x3928b9
// declared property setter: - (void)setDefaultButtonTitle:(id)title;	// 0x392785
// declared property setter: - (void)setDialogDefaultButtonIndex:(int)index;	// 0x3928f9
// declared property setter: - (void)setIsActivated:(BOOL)activated;	// 0x392899
// declared property setter: - (void)setOtherButtonIndex:(int)index;	// 0x392949
// declared property setter: - (void)setOtherButtonTitle:(id)title;	// 0x3927f5
// declared property setter: - (void)setReplyFlags:(unsigned)flags;	// 0x392631
// declared property setter: - (void)setReplyPort:(unsigned)port;	// 0x3925f1
// declared property setter: - (void)setRequestFlags:(int)flags;	// 0x392611
// declared property setter: - (void)setShouldCancel:(BOOL)cancel;	// 0x392691
// declared property setter: - (void)setTextFieldEnteredValues:(id)values;	// 0x392875
// declared property setter: - (void)setTextFieldInitialValues:(id)values;	// 0x392851
// declared property setter: - (void)setTextFieldTitles:(id)titles;	// 0x39282d
// declared property setter: - (void)setTimeout:(int)timeout;	// 0x392671
// declared property setter: - (void)setToken:(int)token;	// 0x392651
// declared property getter: - (BOOL)shouldCancel;	// 0x392681
- (void)textDidChange:(id)text;	// 0x3910d1
- (void)textDidEndEditing:(id)text;	// 0x3910d5
// declared property getter: - (id)textFieldEnteredValues;	// 0x392865
// declared property getter: - (id)textFieldInitialValues;	// 0x392841
// declared property getter: - (id)textFieldTitles;	// 0x39281d
// declared property getter: - (int)timeout;	// 0x392661
// declared property getter: - (int)token;	// 0x392641
- (void)updateWithMessage:(id)message requestFlags:(int)flags;	// 0x3907f9
- (void)wakeup;	// 0x390e49
@end
