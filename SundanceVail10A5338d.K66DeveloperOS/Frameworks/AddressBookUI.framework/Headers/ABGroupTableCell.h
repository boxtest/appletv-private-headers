/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABGroupWrapperDelegate.h"
#import "ABChameleonCell.h"

@class ABGroupWrapper;

@interface ABGroupTableCell : ABChameleonCell <ABGroupWrapperDelegate> {
	ABGroupWrapper *_groupWrapper;	// 304 = 0x130
}
@property(retain, nonatomic) ABGroupWrapper *groupWrapper;	// G=0x370aee91; S=0x370aeccd; @synthesize=_groupWrapper
- (void)dealloc;	// 0x370aee31
// declared property getter: - (id)groupWrapper;	// 0x370aee91
- (void)groupWrapper:(id)wrapper didBecomeSelected:(BOOL)selected;	// 0x370aee21
// declared property setter: - (void)setGroupWrapper:(id)wrapper;	// 0x370aeccd
- (void)updateFromGroupWrapper;	// 0x370aed51
@end
