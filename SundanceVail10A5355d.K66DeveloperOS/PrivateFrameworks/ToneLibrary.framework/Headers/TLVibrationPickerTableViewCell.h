/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

#import "UITextFieldDelegate.h"
#import <UITableViewCell.h> // Unknown library
#import "ToneLibrary-Structs.h"

@class UITextField, NSString;
@protocol TLVibrationPickerTableViewCellDelegate;

@interface TLVibrationPickerTableViewCell : UITableViewCell <UITextFieldDelegate> {
	id<TLVibrationPickerTableViewCellDelegate> _delegate;	// 300 = 0x12c
	BOOL _editable;	// 304 = 0x130
	UITextField *_removableTextField;	// 308 = 0x134
}
@property(readonly, assign, nonatomic, getter=_isDisplayingRemovableTextField) BOOL _displayingRemovableTextField;	// G=0x324601dd; 
@property(assign, nonatomic, getter=isChecked) BOOL checked;	// G=0x324600fd; S=0x3246011d; 
@property(assign, nonatomic) id<TLVibrationPickerTableViewCellDelegate> delegate;	// G=0x3246073d; S=0x3246074d; @synthesize=_delegate
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x3246075d; S=0x3245ffc5; @synthesize=_editable
@property(retain, nonatomic) NSString *placeholder;	// G=0x324600bd; S=0x324600dd; 
@property(retain, nonatomic) NSString *text;	// G=0x3245fff9; S=0x32460059; 
- (id)initWithReuseIdentifier:(id)reuseIdentifier;	// 0x3245fe89
// declared property getter: - (BOOL)_isDisplayingRemovableTextField;	// 0x324601dd
- (void)_layoutRemovableTextField;	// 0x32460249
- (void)_makeRemovableTextFieldEditable:(BOOL)editable;	// 0x324604fd
- (void)dealloc;	// 0x3245ff79
// declared property getter: - (id)delegate;	// 0x3246073d
- (void)didTransitionToState:(unsigned)state;	// 0x32460455
// declared property getter: - (BOOL)isChecked;	// 0x324600fd
// declared property getter: - (BOOL)isEditable;	// 0x3246075d
- (void)layoutSubviews;	// 0x32460415
- (void)makeTextFieldResignFirstResponderIfNeeded;	// 0x32460209
// declared property getter: - (id)placeholder;	// 0x324600bd
// declared property setter: - (void)setChecked:(BOOL)checked;	// 0x3246011d
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x3246074d
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x3245ffc5
// declared property setter: - (void)setPlaceholder:(id)placeholder;	// 0x324600dd
// declared property setter: - (void)setText:(id)text;	// 0x32460059
// declared property getter: - (id)text;	// 0x3245fff9
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x3246064d
- (void)textFieldDidBeginEditing:(id)textField;	// 0x32460699
- (void)textFieldDidEndEditing:(id)textField;	// 0x324606bd
- (BOOL)textFieldShouldReturn:(id)textField;	// 0x3246067d
- (void)willTransitionToState:(unsigned)state;	// 0x324604b1
@end
