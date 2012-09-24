/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray;

@interface OADStyleMatrix : NSObject {
	NSMutableArray *mFills;	// 4 = 0x4
	NSMutableArray *mStrokes;	// 8 = 0x8
	NSMutableArray *mEffects;	// 12 = 0xc
	NSMutableArray *mBgFills;	// 16 = 0x10
}
- (id)init;	// 0x34e71755
- (void)addBgFill:(id)fill;	// 0x34f363a9
- (void)addEffects:(id)effects;	// 0x34f36389
- (void)addFill:(id)fill;	// 0x34f34f55
- (void)addStroke:(id)stroke;	// 0x34f35c61
- (id)bgFillAtIndex:(unsigned)index;	// 0x34f90819
- (unsigned)bgFillCount;	// 0x350aae41
- (void)dealloc;	// 0x34ee2215
- (id)effectsAtIndex:(unsigned)index;	// 0x34f96901
- (id)effectsAtIndex:(unsigned)index color:(id)color;	// 0x350aadbd
- (unsigned)effectsCount;	// 0x350aad9d
- (id)fillAtIndex:(unsigned)index;	// 0x34f94919
- (id)fillAtIndex:(unsigned)index color:(id)color;	// 0x350aaccd
- (unsigned)fillCount;	// 0x350aacad
- (id)strokeAtIndex:(unsigned)index;	// 0x34f963ad
- (id)strokeAtIndex:(unsigned)index color:(id)color;	// 0x350aad45
- (unsigned)strokeCount;	// 0x350aad25
@end
