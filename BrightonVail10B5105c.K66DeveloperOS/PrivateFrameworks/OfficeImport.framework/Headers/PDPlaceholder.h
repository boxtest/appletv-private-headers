/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library


@interface PDPlaceholder : NSObject {
	int mType;	// 4 = 0x4
	int mOrientation;	// 8 = 0x8
	int mSize;	// 12 = 0xc
	int mIndex;	// 16 = 0x10
	int mBoundsTrack;	// 20 = 0x14
}
@property(assign) int boundsTrack;	// G=0x37b2ae39; S=0x379de581; converted property
@property(assign) int index;	// G=0x379108c9; S=0x3790f8c1; converted property
@property(assign) int orientation;	// G=0x37b2ae29; S=0x3790f985; converted property
@property(assign) int size;	// G=0x379fbb41; S=0x3790f95d; converted property
@property(assign) int type;	// G=0x37910509; S=0x3790f941; converted property
- (id)init;	// 0x3790f819
// converted property getter: - (int)boundsTrack;	// 0x37b2ae39
// converted property getter: - (int)index;	// 0x379108c9
// converted property getter: - (int)orientation;	// 0x37b2ae29
// converted property setter: - (void)setBoundsTrack:(int)track;	// 0x379de581
// converted property setter: - (void)setIndex:(int)index;	// 0x3790f8c1
// converted property setter: - (void)setOrientation:(int)orientation;	// 0x3790f985
// converted property setter: - (void)setSize:(int)size;	// 0x3790f95d
// converted property setter: - (void)setType:(int)type;	// 0x3790f941
// converted property getter: - (int)size;	// 0x379fbb41
// converted property getter: - (int)type;	// 0x37910509
@end
