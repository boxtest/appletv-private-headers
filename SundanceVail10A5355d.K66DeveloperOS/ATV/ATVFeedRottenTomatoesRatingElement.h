/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ATVFeedElement.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ATVFeedRottenTomatoesRatingElement : ATVFeedElement {
	NSString *_freshness;	// 4 = 0x4
	float _ratingPercentage;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *freshness;	// G=0x1449f9; S=0x144a09; @synthesize=_freshness
@property(assign, nonatomic) float ratingPercentage;	// G=0x144a19; S=0x144a29; @synthesize=_ratingPercentage
- (id)initWithXMLElement:(id)xmlelement merchant:(id)merchant parent:(id)parent;	// 0x1448e1
- (void)dealloc;	// 0x1449ad
// declared property getter: - (id)freshness;	// 0x1449f9
// declared property getter: - (float)ratingPercentage;	// 0x144a19
// declared property setter: - (void)setFreshness:(id)freshness;	// 0x144a09
// declared property setter: - (void)setRatingPercentage:(float)percentage;	// 0x144a29
@end

