/* Generated by ./xlat/gen.sh from ./xlat/clocknames.in; do not edit. */

static const struct xlat clocknames[] = {
#if defined(CLOCK_REALTIME) || (defined(HAVE_DECL_CLOCK_REALTIME) && HAVE_DECL_CLOCK_REALTIME)
	XLAT(CLOCK_REALTIME),
#endif
#if defined(CLOCK_MONOTONIC) || (defined(HAVE_DECL_CLOCK_MONOTONIC) && HAVE_DECL_CLOCK_MONOTONIC)
	XLAT(CLOCK_MONOTONIC),
#endif
#if defined(CLOCK_PROCESS_CPUTIME_ID) || (defined(HAVE_DECL_CLOCK_PROCESS_CPUTIME_ID) && HAVE_DECL_CLOCK_PROCESS_CPUTIME_ID)
	XLAT(CLOCK_PROCESS_CPUTIME_ID),
#endif
#if defined(CLOCK_THREAD_CPUTIME_ID) || (defined(HAVE_DECL_CLOCK_THREAD_CPUTIME_ID) && HAVE_DECL_CLOCK_THREAD_CPUTIME_ID)
	XLAT(CLOCK_THREAD_CPUTIME_ID),
#endif
#if defined(CLOCK_MONOTONIC_RAW) || (defined(HAVE_DECL_CLOCK_MONOTONIC_RAW) && HAVE_DECL_CLOCK_MONOTONIC_RAW)
	XLAT(CLOCK_MONOTONIC_RAW),
#endif
#if defined(CLOCK_REALTIME_COARSE) || (defined(HAVE_DECL_CLOCK_REALTIME_COARSE) && HAVE_DECL_CLOCK_REALTIME_COARSE)
	XLAT(CLOCK_REALTIME_COARSE),
#endif
#if defined(CLOCK_MONOTONIC_COARSE) || (defined(HAVE_DECL_CLOCK_MONOTONIC_COARSE) && HAVE_DECL_CLOCK_MONOTONIC_COARSE)
	XLAT(CLOCK_MONOTONIC_COARSE),
#endif
#if defined(CLOCK_BOOTTIME) || (defined(HAVE_DECL_CLOCK_BOOTTIME) && HAVE_DECL_CLOCK_BOOTTIME)
	XLAT(CLOCK_BOOTTIME),
#endif
#if defined(CLOCK_REALTIME_ALARM) || (defined(HAVE_DECL_CLOCK_REALTIME_ALARM) && HAVE_DECL_CLOCK_REALTIME_ALARM)
	XLAT(CLOCK_REALTIME_ALARM),
#endif
#if defined(CLOCK_BOOTTIME_ALARM) || (defined(HAVE_DECL_CLOCK_BOOTTIME_ALARM) && HAVE_DECL_CLOCK_BOOTTIME_ALARM)
	XLAT(CLOCK_BOOTTIME_ALARM),
#endif
#if defined(CLOCK_SGI_CYCLE) || (defined(HAVE_DECL_CLOCK_SGI_CYCLE) && HAVE_DECL_CLOCK_SGI_CYCLE)
	XLAT(CLOCK_SGI_CYCLE),
#endif
#if defined(CLOCK_TAI) || (defined(HAVE_DECL_CLOCK_TAI) && HAVE_DECL_CLOCK_TAI)
	XLAT(CLOCK_TAI),
#endif
	XLAT_END
};
