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
@property(readonly, assign, nonatomic, getter=_isDisplayingRemovableTextField) BOOL _displayingRemovableTextField;	// G=0x33ac6e55; 
@property(assign, nonatomic, getter=isChecked) BOOL checked;	// G=0x33ac6d75; S=0x33ac6d95; 
@property(assign, nonatomic) id<TLVibrationPickerTableViewCellDelegate> delegate;	// G=0x33ac73b5; S=0x33ac73c5; @synthesize=_delegate
@property(assign, nonatomic, getter=isEditable) BOOL editable;	// G=0x33ac73d5; S=0x33ac6c3d; @synthesize=_editable
@property(retain, nonatomic) NSString *placeholder;	// G=0x33ac6d35; S=0x33ac6d55; 
@property(retain, nonatomic) NSString *text;	// G=0x33ac6c71; S=0x33ac6cd1; 
- (id)initWithReuseIdentifier:(id)reuseIdentifier;	// 0x33ac6b01
// declared property getter: - (BOOL)_isDisplayingRemovableTextField;	// 0x33ac6e55
- (void)_layoutRemovableTextField;	// 0x33ac6ec1
- (void)_makeRemovableTextFieldEditable:(BOOL)editable;	// 0x33ac7175
- (void)dealloc;	// 0x33ac6bf1
// declared property getter: - (id)delegate;	// 0x33ac73b5
- (void)didTransitionToState:(unsigned)state;	// 0x33ac70cd
// declared property getter: - (BOOL)isChecked;	// 0x33ac6d75
// declared property getter: - (BOOL)isEditable;	// 0x33ac73d5
- (void)layoutSubviews;	// 0x33ac708d
- (void)makeTextFieldResignFirstResponderIfNeeded;	// 0x33ac6e81
// declared property getter: - (id)placeholder;	// 0x33ac6d35
// declared property setter: - (void)setChecked:(BOOL)checked;	// 0x33ac6d95
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x33ac73c5
// declared property setter: - (void)setEditable:(BOOL)editable;	// 0x33ac6c3d
// declared property setter: - (void)setPlaceholder:(id)placeholder;	// 0x33ac6d55
// declared property setter: - (void)setText:(id)text;	// 0x33ac6cd1
// declared property getter: - (id)text;	// 0x33ac6c71
- (BOOL)textField:(id)field shouldChangeCharactersInRange:(NSRange)range replacementString:(id)string;	// 0x33ac72c5
- (void)textFieldDidBeginEditing:(id)textField;	// 0x33ac7311
- (void)textFieldDidEndEditing:(id)textField;	// 0x33ac7335
- (BOOL)textFieldShouldReturn:(id)textField;	// 0x33ac72f5
- (void)willTransitionToState:(unsigned)state;	// 0x33ac7129
@end
