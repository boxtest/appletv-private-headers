/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocument.h"

@class NSString, NSArray, YTSearchRequest, RUIYTVideosDocumentSpec;

__attribute__((visibility("hidden")))
@interface RUIYTVideosDocument : RUIYTDocument {
	unsigned _startIndex;	// 4 = 0x4
	NSString *_timeFilter;	// 8 = 0x8
	RUIYTVideosDocumentSpec *_spec;	// 12 = 0xc
	NSArray *_videos;	// 16 = 0x10
	int _totalVideos;	// 20 = 0x14
	unsigned _count;	// 24 = 0x18
	YTSearchRequest *__request;	// 28 = 0x1c
	NSArray *__videosPendingEvaluation;	// 32 = 0x20
}
@property(retain, nonatomic) YTSearchRequest *_request;	// G=0x26030d; S=0x26031d; @synthesize=__request
@property(retain, nonatomic) NSArray *_videosPendingEvaluation;	// G=0x260345; S=0x260355; @synthesize=__videosPendingEvaluation
@property(assign, nonatomic) unsigned count;	// G=0x2602ed; S=0x2602fd; @synthesize=_count
@property(retain, nonatomic) RUIYTVideosDocumentSpec *spec;	// G=0x26025d; S=0x26026d; @synthesize=_spec
@property(assign, nonatomic) unsigned startIndex;	// G=0x260205; S=0x260215; @synthesize=_startIndex
@property(retain, nonatomic) NSString *timeFilter;	// G=0x260225; S=0x260235; @synthesize=_timeFilter
@property(assign, nonatomic) int totalVideos;	// G=0x2602cd; S=0x2602dd; @synthesize=_totalVideos
@property(retain, nonatomic) NSArray *videos;	// G=0x260295; S=0x2602a5; @synthesize=_videos
- (id)initWithSpec:(id)spec;	// 0x25eddd
- (void).cxx_destruct;	// 0x26037d
- (void)_cancelLoad;	// 0x25f559
- (id)_evaluateVideos:(id)videos;	// 0x25f8dd
- (void)_favoritesUpdated:(id)updated;	// 0x25f7d9
- (BOOL)_isYTVideoRestricted:(id)restricted;	// 0x260119
- (void)_loadRequest;	// 0x25ef15
// declared property getter: - (id)_request;	// 0x26030d
// declared property getter: - (id)_videosPendingEvaluation;	// 0x260345
// declared property getter: - (unsigned)count;	// 0x2602ed
- (void)dealloc;	// 0x25ee75
- (void)searchRequest:(id)request didFailWithError:(id)error;	// 0x25f7c5
- (void)searchRequest:(id)request receivedVideos:(id)videos startIndex:(unsigned)index videosRemaining:(unsigned)remaining;	// 0x25f611
// declared property setter: - (void)setCount:(unsigned)count;	// 0x2602fd
// declared property setter: - (void)setSpec:(id)spec;	// 0x26026d
// declared property setter: - (void)setStartIndex:(unsigned)index;	// 0x260215
// declared property setter: - (void)setTimeFilter:(id)filter;	// 0x260235
// declared property setter: - (void)setTotalVideos:(int)videos;	// 0x2602dd
// declared property setter: - (void)setVideos:(id)videos;	// 0x2602a5
// declared property setter: - (void)set_request:(id)request;	// 0x26031d
// declared property setter: - (void)set_videosPendingEvaluation:(id)evaluation;	// 0x260355
// declared property getter: - (id)spec;	// 0x26025d
// declared property getter: - (unsigned)startIndex;	// 0x260205
// declared property getter: - (id)timeFilter;	// 0x260225
// declared property getter: - (int)totalVideos;	// 0x2602cd
// declared property getter: - (id)videos;	// 0x260295
@end

