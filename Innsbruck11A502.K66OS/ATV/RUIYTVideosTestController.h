/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "RUIYTDocumentLoaderDelegate.h"
#import "RUIYTVideoPlaybackAspectDelegate.h"
#import "BRViewController.h"

@class RUIYTVideoPlaybackAspect, RUIYTDocumentLoader, NSDictionary, NSString, RUIYTVideosDocumentSpec;
@protocol BRApplicationTestingDelegate;

__attribute__((visibility("hidden")))
@interface RUIYTVideosTestController : BRViewController <RUIYTDocumentLoaderDelegate, RUIYTVideoPlaybackAspectDelegate> {
	RUIYTDocumentLoader *_documentLoader;	// 104 = 0x68
	RUIYTVideosDocumentSpec *_spec;	// 108 = 0x6c
	RUIYTVideoPlaybackAspect *_videoPlaybackAspect;	// 112 = 0x70
	id<BRApplicationTestingDelegate> _delegate;	// 116 = 0x74
	NSString *_test;	// 120 = 0x78
	NSDictionary *_testOptions;	// 124 = 0x7c
}
@property(assign) __weak id<BRApplicationTestingDelegate> delegate;	// G=0x288221; S=0x288241; @synthesize=_delegate
@property(readonly, assign) NSString *test;	// G=0x288255; @synthesize=_test
@property(readonly, assign) NSDictionary *testOptions;	// G=0x288269; @synthesize=_testOptions
+ (id)controllerWithSpec:(id)spec test:(id)test options:(id)options;	// 0x287929
- (id)initWithSpec:(id)spec test:(id)test options:(id)options;	// 0x28799d
- (void).cxx_destruct;	// 0x28827d
- (void)_loadItem;	// 0x288191
- (void)dealloc;	// 0x287aa9
// declared property getter: - (id)delegate;	// 0x288221
- (void)documentLoader:(id)loader didLoadDocument:(id)document;	// 0x287bf9
- (id)identifier;	// 0x287b09
- (void)playbackWillEndForVideoPlaybackAspect:(id)playback error:(id)error;	// 0x288015
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x288241
// declared property getter: - (id)test;	// 0x288255
// declared property getter: - (id)testOptions;	// 0x288269
- (void)wasPushed;	// 0x287b29
@end

