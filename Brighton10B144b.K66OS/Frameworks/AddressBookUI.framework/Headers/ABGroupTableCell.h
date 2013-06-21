/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import "ABChameleonCell.h"
#import "ABGroupWrapperDelegate.h"

@class ABGroupWrapper;

@interface ABGroupTableCell : ABChameleonCell <ABGroupWrapperDelegate> {
	ABGroupWrapper *_groupWrapper;	// 308 = 0x134
}
@property(retain, nonatomic) ABGroupWrapper *groupWrapper;	// G=0x30938069; S=0x30937ea5; @synthesize=_groupWrapper
- (void)dealloc;	// 0x30938009
// declared property getter: - (id)groupWrapper;	// 0x30938069
- (void)groupWrapper:(id)wrapper didBecomeSelected:(BOOL)selected;	// 0x30937ff9
// declared property setter: - (void)setGroupWrapper:(id)wrapper;	// 0x30937ea5
- (void)updateFromGroupWrapper;	// 0x30937f29
@end
