/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <UITableViewCell.h> // Unknown library

@class MPVideoChapterCellContentView, MPImageCache, MPTimeMarker;

@interface MPVideoChapterCell : UITableViewCell {
	MPVideoChapterCellContentView *_chapterContentView;	// 248 = 0xf8
}
@property(retain, nonatomic) MPImageCache *artworkImageCache;	// G=0x3097234d; S=0x3097232d; 
@property(assign, nonatomic, getter=isCurrent) BOOL current;	// G=0x30972205; S=0x30972229; 
@property(assign, nonatomic) unsigned index;	// G=0x309721e5; S=0x30972249; 
@property(assign, nonatomic) BOOL showThumbnailColumn;	// G=0x309722c9; S=0x30972269; 
@property(assign, nonatomic) float timeColumnWidth;	// G=0x309722ed; S=0x30972289; 
@property(retain, nonatomic) MPTimeMarker *timeMarker;	// G=0x3097230d; S=0x309722a9; 
- (id)initWithStyle:(int)style reuseIdentifier:(id)identifier;	// 0x30971ff5
// declared property getter: - (id)artworkImageCache;	// 0x3097234d
- (void)dealloc;	// 0x30972139
// declared property getter: - (unsigned)index;	// 0x309721e5
// declared property getter: - (BOOL)isCurrent;	// 0x30972205
- (void)prepareForReuse;	// 0x3097238d
// declared property setter: - (void)setArtworkImageCache:(id)cache;	// 0x3097232d
- (void)setArtworkImageRequest:(id)request artworkLoadCompletionHandler:(id)handler;	// 0x3097236d
// declared property setter: - (void)setCurrent:(BOOL)current;	// 0x30972229
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x30972249
- (void)setSelected:(BOOL)selected animated:(BOOL)animated;	// 0x3097218d
// declared property setter: - (void)setShowThumbnailColumn:(BOOL)column;	// 0x30972269
// declared property setter: - (void)setTimeColumnWidth:(float)width;	// 0x30972289
// declared property setter: - (void)setTimeMarker:(id)marker;	// 0x309722a9
// declared property getter: - (BOOL)showThumbnailColumn;	// 0x309722c9
// declared property getter: - (float)timeColumnWidth;	// 0x309722ed
// declared property getter: - (id)timeMarker;	// 0x3097230d
@end
