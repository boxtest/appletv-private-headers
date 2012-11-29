/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "AddressBookUI-Structs.h"
#import "ABUILabelWithPlaceholder.h"

@class UIDatePicker, UIButton, NSDate;
@protocol ABDateFieldDelegate, ABDatePickerPresentationDelegate;

@interface ABDateField : ABUILabelWithPlaceholder {
	UIButton *_clearButton;	// 104 = 0x68
	BOOL _isClearButtonEnabled;	// 108 = 0x6c
	NSDate *_date;	// 112 = 0x70
	UIDatePicker *_datePicker;	// 116 = 0x74
	CGSize _datePickerSize;	// 120 = 0x78
	BOOL _usesDatePickerAsInputView;	// 128 = 0x80
	BOOL _isFirstResponder;	// 129 = 0x81
	BOOL _inBecomeFirstResponder;	// 130 = 0x82
	BOOL _editable;	// 131 = 0x83
	id<ABDateFieldDelegate> _delegate;	// 132 = 0x84
	id<ABDatePickerPresentationDelegate> _presentationDelegate;	// 136 = 0x88
}
@property(retain, nonatomic) NSDate *date;	// G=0x371b1989; S=0x371b0e19; @synthesize=_date
@property(assign, nonatomic) CGSize datePickerSize;	// G=0x371b1999; S=0x371b19b1; @synthesize=_datePickerSize
@property(assign, nonatomic) id<ABDateFieldDelegate> delegate;	// G=0x371b19c5; S=0x371b19d5; @synthesize=_delegate
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x371b1969; S=0x371b1979; @synthesize=_editable
@property(assign, nonatomic) id<ABDatePickerPresentationDelegate> presentationDelegate;	// G=0x371b19e5; S=0x371b19f5; @synthesize=_presentationDelegate
- (id)initWithFrame:(CGRect)frame;	// 0x371b0779
- (void)_attachToDatePicker:(id)datePicker;	// 0x371b0e61
- (id)_clearButton;	// 0x371b0b21
- (void)_clearButtonPressed:(id)pressed;	// 0x371b0cc5
- (CGRect)_clearButtonRectForBounds:(CGRect)bounds;	// 0x371b0971
- (CGSize)_clearButtonSize;	// 0x371b0911
- (CGRect)_contentRectForBounds:(CGRect)bounds;	// 0x371b0acd
- (CGRect)_contentRectForBounds:(CGRect)bounds isClearButtonPresent:(BOOL)present;	// 0x371b0a35
- (void)_dettachFromDatePicker:(id)datePicker;	// 0x371b0e2d
- (float)_extraWidthForClearButton;	// 0x371b091d
- (void)_setClearButtonEnabled:(BOOL)enabled;	// 0x371b0c89
- (void)_setDate:(id)date andInformDelegate:(BOOL)delegate;	// 0x371b0d69
- (BOOL)_shouldEnableClearButton;	// 0x371b0c45
- (void)_updateClearButton;	// 0x371b0cb1
- (void)_updateLabelText;	// 0x371b0d0d
- (BOOL)becomeFirstResponder;	// 0x371b134d
- (BOOL)canBecomeFirstResponder;	// 0x371b1349
- (BOOL)canResignFirstResponder;	// 0x371b170d
// declared property getter: - (id)date;	// 0x371b1989
- (void)datePickerDateDidChange:(id)datePickerDate;	// 0x371b0fd1
// declared property getter: - (CGSize)datePickerSize;	// 0x371b1999
- (void)dealloc;	// 0x371b0859
// declared property getter: - (id)delegate;	// 0x371b19c5
- (void)endEditing;	// 0x371b1959
- (id)inputView;	// 0x371b1935
// declared property getter: - (BOOL)isEditable;	// 0x371b1969
- (void)layoutSubviews;	// 0x371b11e5
// declared property getter: - (id)presentationDelegate;	// 0x371b19e5
- (BOOL)resignFirstResponder;	// 0x371b171d
// declared property setter: - (void)setDate:(id)date;	// 0x371b0e19
// declared property setter: - (void)setDatePickerSize:(CGSize)size;	// 0x371b19b1
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x371b19d5
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x371b1979
- (void)setFrame:(CGRect)frame;	// 0x371b1131
// declared property setter: - (void)setPresentationDelegate:(id)delegate;	// 0x371b19f5
- (void)setUserInteractionEnabled:(BOOL)enabled;	// 0x371b1041
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x371b1081
@end
