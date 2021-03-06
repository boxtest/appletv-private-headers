/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIImageView.h> // Unknown library
#import "UIGestureRecognizerDelegate.h"

@class UITapGestureRecognizer;
@protocol UIMovieSnapshotViewDelegate;

@interface UIMovieSnapshotView : UIImageView <UIGestureRecognizerDelegate> {
	id<UIMovieSnapshotViewDelegate> _delegate;	// 96 = 0x60
	UITapGestureRecognizer *_tapGestureRecognizer;	// 100 = 0x64
}
@property(assign, nonatomic) id<UIMovieSnapshotViewDelegate> delegate;	// G=0x35cbbc85; S=0x35cbbc95; @synthesize=_delegate
- (id)initWithFrame:(CGRect)frame;	// 0x35cbbb19
- (void)_viewWasTapped:(id)tapped;	// 0x35cbbc3d
- (void)dealloc;	// 0x35cbbbd9
// declared property getter: - (id)delegate;	// 0x35cbbc85
- (BOOL)gestureRecognizer:(id)recognizer shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)gestureRecognizer;	// 0x35cbbc39
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x35cbbc95
@end

