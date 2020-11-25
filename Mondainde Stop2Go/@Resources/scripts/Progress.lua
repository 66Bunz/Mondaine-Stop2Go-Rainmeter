function Initialize()
  MeasureTime = SKIN:GetMeasure('MeasureTime')
end

function Update()
-- smooth out the system clock on the minute
  CurrentClock = os.clock() -- millisecond resolution but may not be stable for long
  CurrentMinute = math.floor((os.time()+1)/60) -- this source has 1-second resolution but stable; sync up at :59.5 to make minute jumps tight
  if (not TimeOffset or (LastMinute ~= CurrentMinute)) then
    TimeOffset = MeasureTime:GetValue() - CurrentClock
    LastMinute = CurrentMinute
  end
  SmoothTime = CurrentClock + TimeOffset
  return SmoothTime
end
