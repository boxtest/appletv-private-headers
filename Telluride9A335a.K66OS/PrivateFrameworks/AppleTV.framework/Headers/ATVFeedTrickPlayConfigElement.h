/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "ATVFeedRootElement.h"

@class NSString;

@interface ATVFeedTrickPlayConfigElement : ATVFeedRootElement {
@private
	double _frameTimeDifferenceInSeconds;	// 48 = 0x30
	int _trickPlayCount;	// 56 = 0x38
	NSString *_trickPlayURL;	// 60 = 0x3c
	BOOL _oneBasedNamingScheme;	// 64 = 0x40
	NSString *_thumbnailNameFormat;	// 68 = 0x44
}
@property(assign, nonatomic) double frameTimeDifferenceInSeconds;	// G=0x3430c8f1; S=0x3430c909; @synthesize=_frameTimeDifferenceInSeconds
@property(assign, nonatomic) BOOL oneBasedNamingScheme;	// G=0x3430c971; S=0x3430c981; @synthesize=_oneBasedNamingScheme
@property(copy, nonatomic) NSString *thumbnailNameFormat;	// G=0x3430c991; S=0x3430c9a1; @synthesize=_thumbnailNameFormat
@property(assign, nonatomic) int trickPlayCount;	// G=0x3430c91d; S=0x3430c92d; @synthesize=_trickPlayCount
@property(copy, nonatomic) NSString *trickPlayURL;	// G=0x3430c93d; S=0x3430c94d; @synthesize=_trickPlayURL
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x3430c709
- (void)dealloc;	// 0x3430c891
// declared property getter: - (double)frameTimeDifferenceInSeconds;	// 0x3430c8f1
// declared property getter: - (BOOL)oneBasedNamingScheme;	// 0x3430c971
// declared property setter: - (void)setFrameTimeDifferenceInSeconds:(double)seconds;	// 0x3430c909
// declared property setter: - (void)setOneBasedNamingScheme:(BOOL)scheme;	// 0x3430c981
// declared property setter: - (void)setThumbnailNameFormat:(id)format;	// 0x3430c9a1
// declared property setter: - (void)setTrickPlayCount:(int)count;	// 0x3430c92d
// declared property setter: - (void)setTrickPlayURL:(id)url;	// 0x3430c94d
// declared property getter: - (id)thumbnailNameFormat;	// 0x3430c991
// declared property getter: - (int)trickPlayCount;	// 0x3430c91d
// declared property getter: - (id)trickPlayURL;	// 0x3430c93d
@end

