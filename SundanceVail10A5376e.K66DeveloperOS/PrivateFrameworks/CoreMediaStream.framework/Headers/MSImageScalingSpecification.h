/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import <NSObject.h> // Unknown library
#import "CoreMediaStream-Structs.h"


@interface MSImageScalingSpecification : NSObject {
	float _nominalShortSideLength;	// 4 = 0x4
	float _minimumLongSideLength;	// 8 = 0x8
	float _maximumLongSideLength;	// 12 = 0xc
	int _assetTypeFlags;	// 16 = 0x10
}
@property(assign, nonatomic) int assetTypeFlags;	// G=0x31735d15; S=0x31735d25; @synthesize=_assetTypeFlags
@property(assign, nonatomic) float maximumLongSideLength;	// G=0x31735cf5; S=0x31735d05; @synthesize=_maximumLongSideLength
@property(assign, nonatomic) float minimumLongSideLength;	// G=0x31735cd5; S=0x31735ce5; @synthesize=_minimumLongSideLength
@property(assign, nonatomic) float nominalShortSideLength;	// G=0x31735cb5; S=0x31735cc5; @synthesize=_nominalShortSideLength
+ (id)assetsToGenerateFromImageWithInputSize:(CGSize)inputSize toConformToSpecifications:(id)specifications;	// 0x31735891
+ (id)specificationWithSharedAlbumSpecificationString:(id)sharedAlbumSpecificationString;	// 0x3173571d
// declared property getter: - (int)assetTypeFlags;	// 0x31735d15
- (id)description;	// 0x31735629
// declared property getter: - (float)maximumLongSideLength;	// 0x31735cf5
// declared property getter: - (float)minimumLongSideLength;	// 0x31735cd5
// declared property getter: - (float)nominalShortSideLength;	// 0x31735cb5
- (float)scaleFactorForInputSize:(CGSize)inputSize;	// 0x31735545
// declared property setter: - (void)setAssetTypeFlags:(int)flags;	// 0x31735d25
// declared property setter: - (void)setMaximumLongSideLength:(float)length;	// 0x31735d05
// declared property setter: - (void)setMinimumLongSideLength:(float)length;	// 0x31735ce5
// declared property setter: - (void)setNominalShortSideLength:(float)length;	// 0x31735cc5
@end

