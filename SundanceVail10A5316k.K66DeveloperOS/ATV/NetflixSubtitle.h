/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString;

@interface NetflixSubtitle : XXUnknownSuperclass {
	float startTime_;	// 4 = 0x4
	float endTime_;	// 8 = 0x8
	NSString *text_;	// 12 = 0xc
}
@property(assign, nonatomic) float endTime;	// G=0x4a7685; S=0x4a7695; @synthesize=endTime_
@property(assign, nonatomic) float startTime;	// G=0x4a7665; S=0x4a7675; @synthesize=startTime_
@property(copy, nonatomic) NSString *text;	// G=0x4a76a5; S=0x4a76b5; @synthesize=text_
- (id)initWithText:(id)text startTime:(float)time endTime:(float)time3;	// 0x4a74c5
- (void)dealloc;	// 0x4a7569
- (id)description;	// 0x4a75b5
// declared property getter: - (float)endTime;	// 0x4a7685
// declared property setter: - (void)setEndTime:(float)time;	// 0x4a7695
// declared property setter: - (void)setStartTime:(float)time;	// 0x4a7675
// declared property setter: - (void)setText:(id)text;	// 0x4a76b5
// declared property getter: - (float)startTime;	// 0x4a7665
// declared property getter: - (id)text;	// 0x4a76a5
@end

