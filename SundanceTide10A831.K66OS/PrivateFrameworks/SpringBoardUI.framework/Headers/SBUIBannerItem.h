/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
 */

#import <NSObject.h> // Unknown library

@protocol SBUIBannerSource;

@interface SBUIBannerItem : NSObject {
	id<SBUIBannerSource> _source;	// 4 = 0x4
}
@property(retain, nonatomic) id<SBUIBannerSource> source;	// G=0x377a6c49; S=0x377a6c59; @synthesize=_source
- (id)action;	// 0x377a6c21
- (BOOL)canShowInAssistant;	// 0x377a6c45
- (void)dealloc;	// 0x377a6bcd
- (BOOL)isSticky;	// 0x377a6c1d
- (unsigned)priority;	// 0x377a6c19
// declared property setter: - (void)setSource:(id)source;	// 0x377a6c59
- (id)sortDate;	// 0x377a6c29
- (id)sound;	// 0x377a6c25
// declared property getter: - (id)source;	// 0x377a6c49
@end

