/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class ESDObject, ESDContainer;

__attribute__((visibility("hidden")))
@interface PptHyperlinkBlock : NSObject {
@private
	ESDContainer *mInteractiveInfoContainerHolder;	// 4 = 0x4
	ESDObject *mTxInteractiveInfoAtomHolder;	// 8 = 0x8
}
@property(retain) id interactiveInfoContainerHolder;	// G=0x352dc9c5; S=0x352dc959; converted property
// converted property getter: - (id)interactiveInfoContainerHolder;	// 0x352dc9c5
// converted property setter: - (void)setInteractiveInfoContainerHolder:(id)holder;	// 0x352dc959
- (void)setTxInteractiveInfoAtomHolder:(id)holder;	// 0x352dc969
- (PptTxInteracInfoAtom *)txtInteractiveInfoAtom;	// 0x352dc979
@end
