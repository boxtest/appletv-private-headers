/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSMutableArray, NSArray;

__attribute__((visibility("hidden")))
@interface ATVFeedTextTableDataSet : NSObject {
@private
	NSMutableArray *_rows;	// 4 = 0x4
	NSArray *_headerLabels;	// 8 = 0x8
}
@property(retain) NSArray *headerLabels;	// G=0x35d74e49; S=0x35d74e5d; @synthesize=_headerLabels
@property(readonly, assign) NSArray *rows;	// G=0x35d74dc9; 
- (id)init;	// 0x35d74d0d
- (void)addRow:(id)row;	// 0x35d74dd9
- (void)dealloc;	// 0x35d74d69
// declared property getter: - (id)headerLabels;	// 0x35d74e49
// declared property getter: - (id)rows;	// 0x35d74dc9
// declared property setter: - (void)setHeaderLabels:(id)labels;	// 0x35d74e5d
@end

