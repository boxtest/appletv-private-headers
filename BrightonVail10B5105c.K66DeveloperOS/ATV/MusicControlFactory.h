/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControlHeightFactory.h"
#import "BRControlFactory.h"
#import <XXUnknownSuperclass.h> // Unknown library

@protocol BRSelectionHandler;

__attribute__((visibility("hidden")))
@interface MusicControlFactory : XXUnknownSuperclass <BRControlFactory, BRControlHeightFactory> {
	id<BRSelectionHandler> _selectionHandler;	// 4 = 0x4
}
- (id)initWithDataClient:(id)dataClient dataClientType:(unsigned long)type;	// 0x1d25b9
- (void).cxx_destruct;	// 0x1d28bd
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x1d2681
- (float)heightForControlForData:(id)data requestedBy:(id)by;	// 0x1d27f5
@end

