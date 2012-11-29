/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface NSFileWatcherObservations : NSObject {
	BOOL _attributesChanged;	// 4 = 0x4
	BOOL _contentsChanged;	// 5 = 0x5
	BOOL _deleted;	// 6 = 0x6
	BOOL _moved;	// 7 = 0x7
	NSString *_lastObservedPath;	// 8 = 0x8
	BOOL _didResetURL;	// 12 = 0xc
	NSURL *_url;	// 16 = 0x10
}
- (id)initWithURL:(id)url;	// 0x32643f51
- (void)addAttributeChange;	// 0x32644009
- (void)addContentsChange;	// 0x3264401d
- (void)addDeletion;	// 0x32644031
- (void)addMoveToPath:(id)path;	// 0x32644045
- (void)addMoveToURL:(id)url;	// 0x32644099
- (void)dealloc;	// 0x32643fa5
- (void)notifyObserver:(id)observer;	// 0x326440e5
@end
