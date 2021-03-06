/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface OADProperties : NSObject {
	OADProperties *mParent;	// 4 = 0x4
	unsigned mIsMerged : 1;	// 8 = 0x8
	unsigned mIsMergedWithParent : 1;	// 8 = 0x8
}
@property(assign, getter=isMerged) BOOL merged;	// G=0x339732e9; S=0x33973311; converted property
@property(assign, getter=isMergedWithParent) BOOL mergedWithParent;	// G=0x339732fd; S=0x3397332d; converted property
@property(retain) id parent;	// G=0x339c0469; S=0x33958a1d; converted property
+ (id)defaultProperties;	// 0x339bdefd
- (id)init;	// 0x339587c9
- (id)initWithDefaults;	// 0x33958771
- (void)dealloc;	// 0x33969649
- (void)flatten;	// 0x33ba413d
- (unsigned)hash;	// 0x33ba418d
- (BOOL)isEqual:(id)equal;	// 0x339c3d2d
// converted property getter: - (BOOL)isMerged;	// 0x339732e9
- (BOOL)isMergedPropertyForSelector:(SEL)selector;	// 0x339734d1
// converted property getter: - (BOOL)isMergedWithParent;	// 0x339732fd
- (id)overrideForSelector:(SEL)selector;	// 0x33972bf5
// converted property getter: - (id)parent;	// 0x339c0469
- (void)removeUnnecessaryOverrides;	// 0x339c1141
// converted property setter: - (void)setMerged:(BOOL)merged;	// 0x33973311
// converted property setter: - (void)setMergedWithParent:(BOOL)parent;	// 0x3397332d
// converted property setter: - (void)setParent:(id)parent;	// 0x33958a1d
- (void)setParent:(id)parent myRestrictedClass:(Class)aClass;	// 0x339c4be5
@end

