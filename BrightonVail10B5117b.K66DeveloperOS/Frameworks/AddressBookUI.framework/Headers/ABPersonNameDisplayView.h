/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABPasteboardControl.h"

@class NSString, UILabel, UIFont, ABStyleProvider, ABNamePropertyGroup, UIView;

@interface ABPersonNameDisplayView : ABPasteboardControl {
	ABNamePropertyGroup *_namePropertyGroup;	// 72 = 0x48
	int _primaryProperty;	// 76 = 0x4c
	NSString *_primaryPropertyFormattingCountryCode;	// 80 = 0x50
	float _minimumHeight;	// 84 = 0x54
	BOOL _alignOnBottom;	// 88 = 0x58
	UILabel *_headlineLabel;	// 92 = 0x5c
	UILabel *_tagLineLabel;	// 96 = 0x60
	UILabel *_messageLabel;	// 100 = 0x64
	UILabel *_messageDetailLabel;	// 104 = 0x68
	UIFont *_messageFont;	// 108 = 0x6c
	UIFont *_messageDetailFont;	// 112 = 0x70
	ABStyleProvider *_styleProvider;	// 116 = 0x74
	NSString *_customHeadline;	// 120 = 0x78
	NSString *_customTagLine;	// 124 = 0x7c
	NSString *_customMessage;	// 128 = 0x80
	NSString *_customMessageDetail;	// 132 = 0x84
	UIView *_customMessageView;	// 136 = 0x88
}
@property(assign, nonatomic) BOOL alignOnBottom;	// G=0x3095a8e5; S=0x30907075; @synthesize=_alignOnBottom
@property(retain, nonatomic) UIView *customMessageView;	// G=0x3095a965; S=0x3095a0d9; @synthesize=_customMessageView
@property(copy, nonatomic) NSString *headline;	// G=0x3095a8f5; S=0x30959fd9; @synthesize=_customHeadline
@property(copy, nonatomic) NSString *message;	// G=0x3095a91d; S=0x3095a089; @synthesize=_customMessage
@property(copy, nonatomic) NSString *messageDetail;	// G=0x3095a931; S=0x3095a0c5; @synthesize=_customMessageDetail
@property(retain, nonatomic) UIFont *messageDetailFont;	// G=0x3095a955; S=0x3095a0b1; @synthesize=_messageDetailFont
@property(retain, nonatomic) UIFont *messageFont;	// G=0x3095a945; S=0x3095a09d; @synthesize=_messageFont
@property(assign, nonatomic) float minimumHeight;	// G=0x3095a8d5; S=0x3090705d; @synthesize=_minimumHeight
@property(retain, nonatomic) ABNamePropertyGroup *namePropertyGroup;	// G=0x3095a8a1; S=0x30907015; @synthesize=_namePropertyGroup
@property(assign, nonatomic) int primaryProperty;	// G=0x3095a8b1; S=0x3091f949; @synthesize=_primaryProperty
@property(copy, nonatomic) NSString *primaryPropertyFormattingCountryCode;	// G=0x3095a8c1; S=0x3091f95d; @synthesize=_primaryPropertyFormattingCountryCode
@property(retain, nonatomic) ABStyleProvider *styleProvider;	// G=0x30907265; S=0x30907085; @synthesize=_styleProvider
@property(copy, nonatomic) NSString *tagLine;	// G=0x3095a909; S=0x3095a031; @synthesize=_customTagLine
- (id)initWithFrame:(CGRect)frame;	// 0x30906f89
- (void)_adjustLabelTextColorForPasteboardSelection:(BOOL)pasteboardSelection;	// 0x3095a1d1
- (void)_appendString:(id)string withFormatKey:(id)formatKey toTagLine:(id)tagLine;	// 0x30907e6d
- (id)_copyPrimaryValue;	// 0x3091f8b1
- (id)_copyTagLine;	// 0x30907a1d
- (float)_heightForLabelsForWidth:(float)width;	// 0x309080d5
- (id)_newLabelWithFont:(id)font numberOfLines:(unsigned)lines;	// 0x309072a5
- (void)_setFont:(id)font isDetail:(BOOL)detail;	// 0x3095a6e5
- (void)_setLabel:(id)label highlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x3095a791
- (void)_setMessageText:(id)text isDetail:(BOOL)detail;	// 0x3095a5b9
- (void)_setSubviewsHighlighted:(BOOL)highlighted animated:(BOOL)animated;	// 0x3095a811
- (void)_updateHeadlineText;	// 0x309074d5
- (void)_updateTagLineText;	// 0x3090796d
- (void)abMenuControllerWillHide;	// 0x3095a395
- (void)abMenuControllerWillShow:(id)abMenuController;	// 0x3095a315
- (BOOL)abShouldShowMenu;	// 0x3095a311
// declared property getter: - (BOOL)alignOnBottom;	// 0x3095a8e5
- (BOOL)canPerformAction:(SEL)action withSender:(id)sender;	// 0x3095a3c5
- (void)copy:(id)copy;	// 0x3095a3dd
// declared property getter: - (id)customMessageView;	// 0x3095a965
- (void)dealloc;	// 0x3091da71
// declared property getter: - (id)headline;	// 0x3095a8f5
- (void)initializeHeadlineAndTaglineIfNeeded;	// 0x30907129
- (void)layoutSubviews;	// 0x3091a7f1
// declared property getter: - (id)message;	// 0x3095a91d
// declared property getter: - (id)messageDetail;	// 0x3095a931
// declared property getter: - (id)messageDetailFont;	// 0x3095a955
// declared property getter: - (id)messageFont;	// 0x3095a945
// declared property getter: - (float)minimumHeight;	// 0x3095a8d5
- (CGSize)multilineLabel:(id)label sizeThatFits:(CGSize)fits;	// 0x3090827d
// declared property getter: - (id)namePropertyGroup;	// 0x3095a8a1
// declared property getter: - (int)primaryProperty;	// 0x3095a8b1
// declared property getter: - (id)primaryPropertyFormattingCountryCode;	// 0x3095a8c1
- (void)reloadNameDataAnimated:(BOOL)animated;	// 0x309082f1
// declared property setter: - (void)setAlignOnBottom:(BOOL)bottom;	// 0x30907075
// declared property setter: - (void)setCustomMessageView:(id)view;	// 0x3095a0d9
- (void)setFrame:(CGRect)frame;	// 0x30906fd1
// declared property setter: - (void)setHeadline:(id)headline;	// 0x30959fd9
// declared property setter: - (void)setMessage:(id)message;	// 0x3095a089
// declared property setter: - (void)setMessageDetail:(id)detail;	// 0x3095a0c5
// declared property setter: - (void)setMessageDetailFont:(id)font;	// 0x3095a0b1
// declared property setter: - (void)setMessageFont:(id)font;	// 0x3095a09d
// declared property setter: - (void)setMinimumHeight:(float)height;	// 0x3090705d
// declared property setter: - (void)setNamePropertyGroup:(id)group;	// 0x30907015
// declared property setter: - (void)setPrimaryProperty:(int)property;	// 0x3091f949
// declared property setter: - (void)setPrimaryPropertyFormattingCountryCode:(id)code;	// 0x3091f95d
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x30907085
// declared property setter: - (void)setTagLine:(id)line;	// 0x3095a031
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x3090804d
// declared property getter: - (id)styleProvider;	// 0x30907265
// declared property getter: - (id)tagLine;	// 0x3095a909
@end

