/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVCaptureFileOutput.h"

@class AVCaptureMovieFileOutputInternal, NSArray;

@interface AVCaptureMovieFileOutput : AVCaptureFileOutput {
@private
	AVCaptureMovieFileOutputInternal *_internal;	// 12 = 0xc
}
@property(copy, nonatomic) NSArray *metadata;	// G=0x346dcbed; S=0x346dcb75; 
@property(assign, nonatomic) XXStruct_pwHToB movieFragmentInterval;	// G=0x346dac7d; S=0x346dcc31; 
@property(assign) BOOL sendsLastVideoPreviewFrame;	// G=0x346dacd5; S=0x346dacb5; converted property
+ (BOOL)consolidateMovieFragmentsInFile:(id)file error:(id *)error;	// 0x346dae7d
+ (void)initialize;	// 0x346dac79
+ (id)recorderCommonMetadataForAVMetadataItemArray:(id)avmetadataItemArray;	// 0x346daf5d
+ (BOOL)updateMovieMetadataInFile:(id)file withMetadata:(id)metadata error:(id *)error;	// 0x346daedd
- (id)init;	// 0x346dadf1
- (long)_avErrorForDidStopRecordingReason:(id)_avErrorFor;	// 0x346dcac1
- (void)_handleStartRecordingErrorWithDomain:(id)domain code:(long)code info:(id)info;	// 0x346dc8e9
- (long)_startRecording:(id)recording;	// 0x346db0d9
- (long)_stopRecording;	// 0x346db0b1
- (id)connectionMediaTypes;	// 0x346dd1d9
- (void)dealloc;	// 0x346dd231
- (void)didStopForSession:(id)session error:(id)error;	// 0x346dcd65
- (BOOL)getRecorderBoolForKey:(id)key withDefault:(BOOL)aDefault;	// 0x346dd27d
- (void)handleEnabledChangedForConnection:(id)connection;	// 0x346dcd19
- (void)handleNotification:(id)notification payload:(id)payload;	// 0x346db8e1
- (BOOL)isRecording;	// 0x346dd19d
- (BOOL)isRecordingPaused;	// 0x346dd171
// declared property getter: - (id)metadata;	// 0x346dcbed
// declared property getter: - (XXStruct_pwHToB)movieFragmentInterval;	// 0x346dac7d
- (id)outputFileURL;	// 0x346dcff1
- (void)pauseRecording;	// 0x346dd0f5
- (void)resumeRecording;	// 0x346dd07d
// converted property getter: - (BOOL)sendsLastVideoPreviewFrame;	// 0x346dacd5
// declared property setter: - (void)setMetadata:(id)metadata;	// 0x346dcb75
// declared property setter: - (void)setMovieFragmentInterval:(XXStruct_pwHToB)interval;	// 0x346dcc31
// converted property setter: - (void)setSendsLastVideoPreviewFrame:(BOOL)frame;	// 0x346dacb5
- (void)startRecordingToOutputFileURL:(id)outputFileURL recordingDelegate:(id)delegate;	// 0x346dcda9
- (void)stopRecording;	// 0x346dcd99
@end

