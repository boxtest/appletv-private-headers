/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <NSObject.h> // Unknown library

@class NSString, NSMutableArray;

@interface UIMovieClosedCaptionData : NSObject {
@private
	NSString *_language;	// 4 = 0x4
	NSMutableArray *_data;	// 8 = 0x8
}
@property(retain, nonatomic) NSString *language;	// G=0x31a5b9b9; S=0x31a5b9c9; @synthesize=_language
- (void)addCaptionText:(id)text startTime:(double)time endTime:(double)time3;	// 0x31a5b6d5
- (void)dealloc;	// 0x31a5b675
- (id)description;	// 0x31a5b95d
// declared property getter: - (id)language;	// 0x31a5b9b9
// declared property setter: - (void)setLanguage:(id)language;	// 0x31a5b9c9
- (id)timeMarkers;	// 0x31a5b94d
@end
