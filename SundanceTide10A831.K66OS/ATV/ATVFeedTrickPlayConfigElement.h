/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedRootElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedTrickPlayConfigElement : ATVFeedRootElement {
	double _frameTimeDifferenceInSeconds;	// 8 = 0x8
	int _trickPlayCount;	// 16 = 0x10
	NSString *_trickPlayURL;	// 20 = 0x14
	BOOL _oneBasedNamingScheme;	// 24 = 0x18
	NSString *_thumbnailNameFormat;	// 28 = 0x1c
}
@property(assign, nonatomic) double frameTimeDifferenceInSeconds;	// G=0x15e4a5; S=0x15e4bd; @synthesize=_frameTimeDifferenceInSeconds
@property(assign, nonatomic) BOOL oneBasedNamingScheme;	// G=0x15e515; S=0x15e525; @synthesize=_oneBasedNamingScheme
@property(copy, nonatomic) NSString *thumbnailNameFormat;	// G=0x15e535; S=0x15e549; @synthesize=_thumbnailNameFormat
@property(assign, nonatomic) int trickPlayCount;	// G=0x15e4d1; S=0x15e4e1; @synthesize=_trickPlayCount
@property(copy, nonatomic) NSString *trickPlayURL;	// G=0x15e4f1; S=0x15e505; @synthesize=_trickPlayURL
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x15e2c1
- (void)dealloc;	// 0x15e441
// declared property getter: - (double)frameTimeDifferenceInSeconds;	// 0x15e4a5
// declared property getter: - (BOOL)oneBasedNamingScheme;	// 0x15e515
// declared property setter: - (void)setFrameTimeDifferenceInSeconds:(double)seconds;	// 0x15e4bd
// declared property setter: - (void)setOneBasedNamingScheme:(BOOL)scheme;	// 0x15e525
// declared property setter: - (void)setThumbnailNameFormat:(id)format;	// 0x15e549
// declared property setter: - (void)setTrickPlayCount:(int)count;	// 0x15e4e1
// declared property setter: - (void)setTrickPlayURL:(id)url;	// 0x15e505
// declared property getter: - (id)thumbnailNameFormat;	// 0x15e535
// declared property getter: - (int)trickPlayCount;	// 0x15e4d1
// declared property getter: - (id)trickPlayURL;	// 0x15e4f1
@end

