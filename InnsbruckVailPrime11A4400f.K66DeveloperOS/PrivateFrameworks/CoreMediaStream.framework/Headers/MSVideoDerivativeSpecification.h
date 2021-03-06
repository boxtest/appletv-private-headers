/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreMediaStream.framework/CoreMediaStream
 */

#import </libobjc.A.h>

@class NSString;

@interface MSVideoDerivativeSpecification : NSObject {
	BOOL _useCellular;	// 4 = 0x4
	BOOL _powerRequired;	// 5 = 0x5
	float _bitRate;	// 8 = 0x8
	NSString *_videoType;	// 12 = 0xc
	unsigned _mediaAssetType;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) float bitRate;	// G=0x30595da9; @synthesize=_bitRate
@property(readonly, assign, nonatomic) unsigned mediaAssetType;	// G=0x30595dc9; @synthesize=_mediaAssetType
@property(readonly, assign, nonatomic) BOOL powerRequired;	// G=0x30595d99; @synthesize=_powerRequired
@property(readonly, assign, nonatomic) BOOL useCellular;	// G=0x30595d89; @synthesize=_useCellular
@property(readonly, assign, nonatomic) NSString *videoType;	// G=0x30595db9; @synthesize=_videoType
+ (id)videoDerivativeSpecificationsWithDictionaryArray:(id)dictionaryArray;	// 0x30595c35
- (id)initWithDictionary:(id)dictionary;	// 0x30595a6d
// declared property getter: - (float)bitRate;	// 0x30595da9
// declared property getter: - (unsigned)mediaAssetType;	// 0x30595dc9
// declared property getter: - (BOOL)powerRequired;	// 0x30595d99
// declared property getter: - (BOOL)useCellular;	// 0x30595d89
// declared property getter: - (id)videoType;	// 0x30595db9
@end

