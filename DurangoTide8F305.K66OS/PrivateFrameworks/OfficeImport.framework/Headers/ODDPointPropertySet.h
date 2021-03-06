/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ODDPointPropertySet : NSObject {
@private
	NSString *mLayoutTypeId;	// 4 = 0x4
	NSString *mPresentationName;	// 8 = 0x8
	NSString *mPresentationStyleLabel;	// 12 = 0xc
	int mPresentationStyleIndex;	// 16 = 0x10
	int mPresentationStyleCount;	// 20 = 0x14
	NSObject *mPresentationAssociatedId;	// 24 = 0x18
	BOOL mCustomVerticalFlip;	// 28 = 0x1c
	double mCustomScaleX;	// 32 = 0x20
	double mCustomScaleY;	// 40 = 0x28
	double mCustomOffsetX;	// 48 = 0x30
	double mCustomOffsetY;	// 56 = 0x38
}
@property(assign) double customOffsetX;	// G=0x345452b9; S=0x34542285; converted property
@property(assign) double customOffsetY;	// G=0x345452c9; S=0x34542271; converted property
@property(assign) double customScaleX;	// G=0x34545299; S=0x34542249; converted property
@property(assign) double customScaleY;	// G=0x345452a9; S=0x3454225d; converted property
@property(assign) BOOL customVerticalFlip;	// G=0x34597e55; S=0x34597e65; converted property
@property(retain) id layoutTypeId;	// G=0x34543441; S=0x34541fcd; converted property
@property(retain) id presentationAssociatedId;	// G=0x34542eb9; S=0x34542211; converted property
@property(retain) id presentationName;	// G=0x34545aa1; S=0x34542005; converted property
@property(assign) int presentationStyleCount;	// G=0x34597e45; S=0x345423a1; converted property
@property(assign) int presentationStyleIndex;	// G=0x34545b11; S=0x345423b1; converted property
@property(retain) id presentationStyleLabel;	// G=0x34545ab1; S=0x3454203d; converted property
// converted property getter: - (double)customOffsetX;	// 0x345452b9
// converted property getter: - (double)customOffsetY;	// 0x345452c9
// converted property getter: - (double)customScaleX;	// 0x34545299
// converted property getter: - (double)customScaleY;	// 0x345452a9
// converted property getter: - (BOOL)customVerticalFlip;	// 0x34597e55
- (void)dealloc;	// 0x34546bcd
// converted property getter: - (id)layoutTypeId;	// 0x34543441
// converted property getter: - (id)presentationAssociatedId;	// 0x34542eb9
// converted property getter: - (id)presentationName;	// 0x34545aa1
// converted property getter: - (int)presentationStyleCount;	// 0x34597e45
// converted property getter: - (int)presentationStyleIndex;	// 0x34545b11
// converted property getter: - (id)presentationStyleLabel;	// 0x34545ab1
// converted property setter: - (void)setCustomOffsetX:(double)x;	// 0x34542285
// converted property setter: - (void)setCustomOffsetY:(double)y;	// 0x34542271
// converted property setter: - (void)setCustomScaleX:(double)x;	// 0x34542249
// converted property setter: - (void)setCustomScaleY:(double)y;	// 0x3454225d
// converted property setter: - (void)setCustomVerticalFlip:(BOOL)flip;	// 0x34597e65
// converted property setter: - (void)setLayoutTypeId:(id)anId;	// 0x34541fcd
// converted property setter: - (void)setPresentationAssociatedId:(id)anId;	// 0x34542211
// converted property setter: - (void)setPresentationName:(id)name;	// 0x34542005
// converted property setter: - (void)setPresentationStyleCount:(int)count;	// 0x345423a1
// converted property setter: - (void)setPresentationStyleIndex:(int)index;	// 0x345423b1
// converted property setter: - (void)setPresentationStyleLabel:(id)label;	// 0x3454203d
@end

