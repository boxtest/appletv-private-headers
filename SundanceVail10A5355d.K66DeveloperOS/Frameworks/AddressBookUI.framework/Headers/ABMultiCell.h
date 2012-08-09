/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABChameleonCell.h"
#import "AddressBookUI-Structs.h"

@class ABMultiCellContentView;

@interface ABMultiCell : ABChameleonCell {
	ABMultiCellContentView *_abMultiCellContentView;	// 308 = 0x134
	BOOL _editingDisabled;	// 312 = 0x138
}
@property(assign, nonatomic, getter=isEditingDisabled) BOOL editingDisabled;	// G=0x34fcd715; S=0x34f84b4d; @synthesize=_editingDisabled
@property(retain, nonatomic) ABMultiCellContentView *multiCellContentView;	// G=0x34f84b75; S=0x34f84b85; 
- (void)_addMultiCellContentViewIfNeeded;	// 0x34f84c1d
- (BOOL)_shouldSwallowTouches:(id)touches withEvent:(id)event;	// 0x34f9a8bd
- (void)dealloc;	// 0x34f93f91
// declared property getter: - (BOOL)isEditingDisabled;	// 0x34fcd715
- (void)layoutSubviews;	// 0x34f8697d
// declared property getter: - (id)multiCellContentView;	// 0x34f84b75
- (void)setAbCellStyle:(int)style;	// 0x34f87681
- (void)setEditing:(BOOL)editing animated:(BOOL)animated;	// 0x34f871b5
// declared property setter: - (void)setEditingDisabled:(BOOL)disabled;	// 0x34f84b4d
// declared property setter: - (void)setMultiCellContentView:(id)view;	// 0x34f84b85
- (CGSize)sizeThatFits:(CGSize)fits;	// 0x34fcd639
- (void)touchesBegan:(id)began withEvent:(id)event;	// 0x34f9a86d
- (void)touchesCancelled:(id)cancelled withEvent:(id)event;	// 0x34fcd6c5
- (void)touchesEnded:(id)ended withEvent:(id)event;	// 0x34f9b7bd
- (void)touchesMoved:(id)moved withEvent:(id)event;	// 0x34fcd675
@end
