/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UITableViewCell.h> // Unknown library

@class MPVideoChapterCellContentView, MPTimeMarker;

@interface MPVideoChapterCell : UITableViewCell {
	MPVideoChapterCellContentView *_chapterContentView;	// 216 = 0xd8
}
@property(assign, nonatomic, getter=isCurrent) BOOL current;	// G=0x335ffc49; S=0x335ffc25; 
@property(assign, nonatomic) unsigned index;	// G=0x335ffc6d; S=0x335ffc05; 
@property(assign, nonatomic) BOOL showThumbnailColumn;	// G=0x335ffb7d; S=0x335ffbe1; 
@property(assign, nonatomic) float timeColumnWidth;	// G=0x335ffb5d; S=0x335ffbc1; 
@property(retain, nonatomic) MPTimeMarker *timeMarker;	// G=0x335ffb3d; S=0x335ffba1; 
- (id)initWithFrame:(CGRect)frame reuseIdentifier:(id)identifier;	// 0x335ffd29
- (void)dealloc;	// 0x335ffcdd
// declared property getter: - (unsigned)index;	// 0x335ffc6d
// declared property getter: - (BOOL)isCurrent;	// 0x335ffc49
// declared property setter: - (void)setCurrent:(BOOL)current;	// 0x335ffc25
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x335ffc05
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x335ffc8d
// declared property setter: - (void)setShowThumbnailColumn:(BOOL)column;	// 0x335ffbe1
// declared property setter: - (void)setTimeColumnWidth:(float)width;	// 0x335ffbc1
// declared property setter: - (void)setTimeMarker:(id)marker;	// 0x335ffba1
// declared property getter: - (BOOL)showThumbnailColumn;	// 0x335ffb7d
// declared property getter: - (float)timeColumnWidth;	// 0x335ffb5d
// declared property getter: - (id)timeMarker;	// 0x335ffb3d
@end

