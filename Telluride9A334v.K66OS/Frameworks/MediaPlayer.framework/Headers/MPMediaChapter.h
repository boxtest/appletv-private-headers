/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "NSCoding.h"
#import <NSObject.h> // Unknown library


@interface MPMediaChapter : NSObject <NSCoding> {
@private
	int _chapterType;	// 4 = 0x4
	id _value;	// 8 = 0x8
	id _valueLoader;	// 12 = 0xc
	unsigned _indexInChaptersWithAnyType;	// 16 = 0x10
	unsigned _indexInChaptersWithSameType;	// 20 = 0x14
	double _playbackTime;	// 24 = 0x18
	double _playbackDuration;	// 32 = 0x20
}
@property(assign, nonatomic) int chapterType;	// G=0x34e5b33d; S=0x34e5b34d; @synthesize=_chapterType
@property(assign, nonatomic) unsigned indexInChaptersWithAnyType;	// G=0x34e5b2fd; S=0x34e5b30d; @synthesize=_indexInChaptersWithAnyType
@property(assign, nonatomic) unsigned indexInChaptersWithSameType;	// G=0x34e5b31d; S=0x34e5b32d; @synthesize=_indexInChaptersWithSameType
@property(assign, nonatomic) double playbackDuration;	// G=0x34e5b35d; S=0x34e5b375; @synthesize=_playbackDuration
@property(assign, nonatomic) double playbackTime;	// G=0x34e5b389; S=0x34e5b3a1; @synthesize=_playbackTime
@property(retain, nonatomic) id value;	// G=0x34e5b209; S=0x34e5b3b5; @synthesize=_value
@property(copy, nonatomic) id valueLoader;	// G=0x34e5b3d9; S=0x34e5b3e9; @synthesize=_valueLoader
- (id)initWithCoder:(id)coder;	// 0x34e5b049
- (int)_sortByChapterIndex:(id)index;	// 0x34e590b5
// declared property getter: - (int)chapterType;	// 0x34e5b33d
- (void)dealloc;	// 0x34e5ad85
- (id)description;	// 0x34e5ade5
- (double)duration;	// 0x34e5b2e5
- (void)encodeWithCoder:(id)coder;	// 0x34e5aed9
// declared property getter: - (unsigned)indexInChaptersWithAnyType;	// 0x34e5b2fd
// declared property getter: - (unsigned)indexInChaptersWithSameType;	// 0x34e5b31d
// declared property getter: - (double)playbackDuration;	// 0x34e5b35d
// declared property getter: - (double)playbackTime;	// 0x34e5b389
// declared property setter: - (void)setChapterType:(int)type;	// 0x34e5b34d
// declared property setter: - (void)setIndexInChaptersWithAnyType:(unsigned)anyType;	// 0x34e5b30d
// declared property setter: - (void)setIndexInChaptersWithSameType:(unsigned)sameType;	// 0x34e5b32d
// declared property setter: - (void)setPlaybackDuration:(double)duration;	// 0x34e5b375
// declared property setter: - (void)setPlaybackTime:(double)time;	// 0x34e5b3a1
// declared property setter: - (void)setValue:(id)value;	// 0x34e5b3b5
// declared property setter: - (void)setValueLoader:(id)loader;	// 0x34e5b3e9
- (id)title;	// 0x34e5b291
// declared property getter: - (id)value;	// 0x34e5b209
// declared property getter: - (id)valueLoader;	// 0x34e5b3d9
@end

