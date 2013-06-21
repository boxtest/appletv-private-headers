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
@property(assign, nonatomic) double frameTimeDifferenceInSeconds;	// G=0x1687b1; S=0x1687c9; @synthesize=_frameTimeDifferenceInSeconds
@property(assign, nonatomic) BOOL oneBasedNamingScheme;	// G=0x168821; S=0x168831; @synthesize=_oneBasedNamingScheme
@property(copy, nonatomic) NSString *thumbnailNameFormat;	// G=0x168841; S=0x168855; @synthesize=_thumbnailNameFormat
@property(assign, nonatomic) int trickPlayCount;	// G=0x1687dd; S=0x1687ed; @synthesize=_trickPlayCount
@property(copy, nonatomic) NSString *trickPlayURL;	// G=0x1687fd; S=0x168811; @synthesize=_trickPlayURL
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x1685cd
- (void)dealloc;	// 0x16874d
// declared property getter: - (double)frameTimeDifferenceInSeconds;	// 0x1687b1
// declared property getter: - (BOOL)oneBasedNamingScheme;	// 0x168821
// declared property setter: - (void)setFrameTimeDifferenceInSeconds:(double)seconds;	// 0x1687c9
// declared property setter: - (void)setOneBasedNamingScheme:(BOOL)scheme;	// 0x168831
// declared property setter: - (void)setThumbnailNameFormat:(id)format;	// 0x168855
// declared property setter: - (void)setTrickPlayCount:(int)count;	// 0x1687ed
// declared property setter: - (void)setTrickPlayURL:(id)url;	// 0x168811
// declared property getter: - (id)thumbnailNameFormat;	// 0x168841
// declared property getter: - (int)trickPlayCount;	// 0x1687dd
// declared property getter: - (id)trickPlayURL;	// 0x1687fd
@end
