/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import "NSPointerFunctions.h"


__attribute__((visibility("hidden")))
@interface NSConcretePointerFunctions : NSPointerFunctions {
	NSSlice slice;	// 4 = 0x4
}
@property(assign) /*function-pointer*/ void *acquireFunction;	// G=0x3259e831; S=0x3259e789; converted property
@property(assign) /*function-pointer*/ void *descriptionFunction;	// G=0x3259e81d; S=0x3251ca59; converted property
@property(assign) /*function-pointer*/ void *hashFunction;	// G=0x3259e7f5; S=0x3251ca6d; converted property
@property(assign) /*function-pointer*/ void *isEqualFunction;	// G=0x3259e809; S=0x3251ca41; converted property
@property(assign) /*function-pointer*/ void *relinquishFunction;	// G=0x3259e845; S=0x3259e79d; converted property
@property(assign) /*function-pointer*/ void *sizeFunction;	// G=0x3259e7e1; S=0x3259e775; converted property
@property(assign) BOOL usesStrongWriteBarrier;	// G=0x3259e859; S=0x3259e7b1; converted property
@property(assign) BOOL usesWeakReadAndWriteBarriers;	// G=0x3259e86d; S=0x3259e7c9; converted property
+ (void)initializeBackingStore:(NSSlice *)store sentinel:(BOOL)sentinel compactable:(BOOL)compactable;	// 0x3250687d
+ (bool)initializeSlice:(NSSlice *)slice withOptions:(unsigned)options;	// 0x32506601
- (id)initWithOptions:(unsigned)options;	// 0x3251c9e5
// converted property getter: - (/*function-pointer*/ void *)acquireFunction;	// 0x3259e831
- (id)copyWithZone:(NSZone *)zone;	// 0x3259e721
// converted property getter: - (/*function-pointer*/ void *)descriptionFunction;	// 0x3259e81d
- (unsigned)hash;	// 0x3259e765
// converted property getter: - (/*function-pointer*/ void *)hashFunction;	// 0x3259e7f5
- (BOOL)isEqual:(id)equal;	// 0x3259e769
// converted property getter: - (/*function-pointer*/ void *)isEqualFunction;	// 0x3259e809
// converted property getter: - (/*function-pointer*/ void *)relinquishFunction;	// 0x3259e845
// converted property setter: - (void)setAcquireFunction:(/*function-pointer*/ void *)function;	// 0x3259e789
// converted property setter: - (void)setDescriptionFunction:(/*function-pointer*/ void *)function;	// 0x3251ca59
// converted property setter: - (void)setHashFunction:(/*function-pointer*/ void *)function;	// 0x3251ca6d
// converted property setter: - (void)setIsEqualFunction:(/*function-pointer*/ void *)function;	// 0x3251ca41
// converted property setter: - (void)setRelinquishFunction:(/*function-pointer*/ void *)function;	// 0x3259e79d
// converted property setter: - (void)setSizeFunction:(/*function-pointer*/ void *)function;	// 0x3259e775
// converted property setter: - (void)setUsesStrongWriteBarrier:(BOOL)barrier;	// 0x3259e7b1
// converted property setter: - (void)setUsesWeakReadAndWriteBarriers:(BOOL)barriers;	// 0x3259e7c9
// converted property getter: - (/*function-pointer*/ void *)sizeFunction;	// 0x3259e7e1
// converted property getter: - (BOOL)usesStrongWriteBarrier;	// 0x3259e859
// converted property getter: - (BOOL)usesWeakReadAndWriteBarriers;	// 0x3259e86d
@end
